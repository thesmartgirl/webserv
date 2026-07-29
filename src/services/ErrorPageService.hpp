#pragma once

#include "http/HttpResponse.hpp"

class ErrorPageService {
public:
    HttpResponse makeError(int statusCode) const;
    ErrorPageService();
    ~ErrorPageService();
    ErrorPageService(const ErrorPageService& other);
    ErrorPageService& operator=(const ErrorPageService& other);
};
