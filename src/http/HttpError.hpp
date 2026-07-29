#pragma once
#include <string>

struct HttpError {
    HttpError();
    ~HttpError();
    HttpError(const HttpError& other);
    HttpError& operator=(const HttpError& other);

    int status;
    std::string message;
};
