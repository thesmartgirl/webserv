#include "HttpError.hpp"

HttpError::HttpError() : status(0), message() {}

HttpError::~HttpError() {}

HttpError::HttpError(const HttpError& other) : status(other.status), message(other.message) {}

HttpError& HttpError::operator=(const HttpError& other) {
    if (this != &other) {
        status = other.status;
        message = other.message;
    }
    return *this;
}
