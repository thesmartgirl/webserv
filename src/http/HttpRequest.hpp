#pragma once

#include <map>
#include <string>
#include "HttpTypes.hpp"

class HttpRequest {
public:
    HttpRequest();
    ~HttpRequest();
    HttpRequest(const HttpRequest& other);
    HttpRequest& operator=(const HttpRequest& other);

    HttpMethod method;
    std::string target;
    std::string version;
    std::map<std::string, std::string> headers;
    std::string body;
};
