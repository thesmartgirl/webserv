#pragma once

#include <string>

enum HttpMethod {
    GET,
    POST,
    DELETE_,
    UNKNOWN
};
std::string toString(HttpMethod method);
