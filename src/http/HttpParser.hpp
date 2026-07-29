#pragma once

#include <cstddef>
#include <string>
#include "HttpRequest.hpp"
#include "HttpError.hpp"

enum ParseResult {
    Incomplete,
    Complete,
    Error
};

class HttpParser {
public:
    HttpParser();
    ~HttpParser();
    HttpParser(const HttpParser& other);
    HttpParser& operator=(const HttpParser& other);

    ParseResult parse(const std::string& buffer, size_t& consumed, HttpRequest& req, HttpError& err);
    void reset();
};
