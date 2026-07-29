#pragma once

#include <string>
#include "http/HttpResponse.hpp"

class CgiResponseParser {
public:
    CgiResponseParser();
    ~CgiResponseParser();
    CgiResponseParser(const CgiResponseParser& other);
    CgiResponseParser& operator=(const CgiResponseParser& other);
    HttpResponse parse(const std::string& rawCgiOutput) const;
};
