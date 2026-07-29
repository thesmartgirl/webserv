#include "ClientConnection.hpp"

#include <sys/socket.h>
#include <unistd.h>
#include <cerrno>
#include <cstring>
#include <sstream>

#include "http/HttpRequest.hpp"
#include "http/HttpResponse.hpp"
#include "utils/Logger.hpp"

ClientConnection::ClientConnection() : _fd(-1), _state(NEW_CONNECTION), _bytesSent(0) {}

ClientConnection::ClientConnection(int fd)
    : _fd(fd), _state(NEW_CONNECTION), _bytesSent(0) {}

ClientConnection::~ClientConnection() {}

ClientConnection::ClientConnection(const ClientConnection& other)
    : _fd(other._fd), _state(other._state), _inBuffer(other._inBuffer), _outBuffer(other._outBuffer), _bytesSent(other._bytesSent) {}

ClientConnection& ClientConnection::operator=(const ClientConnection& other) {
    if (this != &other) {
        _fd = other._fd;
        _state = other._state;
        _inBuffer = other._inBuffer;
        _outBuffer = other._outBuffer;
        _bytesSent = other._bytesSent;
    }
    return *this;
}

int ClientConnection::fd() const { return _fd; }

ClientState ClientConnection::state() const { return _state; }

void ClientConnection::setState(ClientState s) { _state = s; }

bool ClientConnection::onReadable() {
    {
        std::ostringstream oss;
        oss << "ClientConnection::onReadable fd=" << _fd;
        Logger::info(oss.str());
    }
    char buf[4096];
    ssize_t n = recv(_fd, buf, sizeof(buf), 0);
    if (n <= 0) {
        {
            std::ostringstream oss;
            oss << "recv returned " << n << ", errno=" << errno << " " << std::strerror(errno);
            Logger::error(oss.str());
        }
        return false;
    }

    _inBuffer.append(buf, static_cast<size_t>(n));

    if (_inBuffer.find("\r\n\r\n") != std::string::npos) {
        {
            std::ostringstream oss;
            oss << "Request complete, preparing response for fd=" << _fd;
            Logger::info(oss.str());
        }
        _outBuffer =
            "HTTP/1.1 200 OK\r\n"
            "Content-Length: 5\r\n"
            "Connection: close\r\n"
            "Content-Type: text/plain\r\n"
            "\r\n"
            "Hello";
        _bytesSent = 0;
        _state = WRITING_RESPONSE;
    } else {
        {
            std::ostringstream oss;
            oss << "Reading headers for fd=" << _fd;
            Logger::info(oss.str());
        }
        _state = READING_HEADERS;
    }

    return true;
}

bool ClientConnection::onWritable() {
    if (_outBuffer.empty()) return true;

    ssize_t n = send(_fd, _outBuffer.data() + _bytesSent, _outBuffer.size() - _bytesSent, 0);
    if (n < 0) {
        {
            std::ostringstream oss;
            oss << "send error fd=" << _fd << ": " << std::strerror(errno);
            Logger::error(oss.str());
        }
        return false;
    }

    {
        std::ostringstream oss;
        oss << "Sent " << n << " bytes on fd=" << _fd;
        Logger::info(oss.str());
    }
    _bytesSent += static_cast<size_t>(n);
    if (_bytesSent >= _outBuffer.size()) {
        {
            std::ostringstream oss;
            oss << "All bytes sent, closing fd=" << _fd;
            Logger::info(oss.str());
        }
        return false;
    }

    return true;
}

HttpRequest& ClientConnection::request() {
    static HttpRequest req;
    return req;
}

HttpResponse& ClientConnection::response() {
    static HttpResponse resp;
    return resp;
}

void ClientConnection::resetForNextRequest() {
    _inBuffer.clear();
    _outBuffer.clear();
    _bytesSent = 0;
    _state = READING_HEADERS;
}

bool ClientConnection::needsWrite() const {
    return !_outBuffer.empty() && _state == WRITING_RESPONSE;
}
