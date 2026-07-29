#pragma once

#include <vector>

class Server {
public:
    Server();
    Server(const char* host, int port, int backlog = 128);
    Server(const Server& other);
    Server& operator=(const Server& other);
    ~Server();

    bool start();

    int listenFd() const;
    int port() const;

private:
    int _listenFd;
    int _port;
    int _backlog;
};
