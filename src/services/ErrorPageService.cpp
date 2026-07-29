#include "ErrorPageService.hpp"

HttpResponse ErrorPageService::makeError(int statusCode) const {
    HttpResponse resp;
    resp.statusCode = statusCode;
    return resp;
}

ErrorPageService::ErrorPageService() {}

ErrorPageService::~ErrorPageService() {}

ErrorPageService::ErrorPageService(const ErrorPageService& other) {
    (void)other;
}

ErrorPageService& ErrorPageService::operator=(const ErrorPageService& other) {
    (void)other;
    return *this;
}
