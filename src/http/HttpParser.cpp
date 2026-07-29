#include "HttpParser.hpp"

HttpParser::HttpParser() {}

HttpParser::~HttpParser() {}

HttpParser::HttpParser(const HttpParser& other) {
    (void)other;
}

HttpParser& HttpParser::operator=(const HttpParser& other) {
    (void)other;
    return *this;
}

ParseResult HttpParser::parse(const std::string& buffer, size_t& consumed, HttpRequest& req, HttpError& err) {
    (void)buffer;
    (void)consumed;
    (void)req;
    (void)err;
    return Incomplete;
}

void HttpParser::reset() {}
