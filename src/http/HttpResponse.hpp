#pragma once

#include <map>
#include <string>

class HttpResponse {
public:
    HttpResponse();
    ~HttpResponse();
    HttpResponse(const HttpResponse& other);
    HttpResponse& operator=(const HttpResponse& other);

    int statusCode;
    std::string reasonPhrase;
    std::map<std::string, std::string> headers;
    std::string body;

    std::string serialize() const;
};
