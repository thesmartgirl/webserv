#include "CgiResponseParser.hpp"

HttpResponse CgiResponseParser::parse(const std::string& rawCgiOutput) const {
    (void)rawCgiOutput;
    return HttpResponse();
}

CgiResponseParser::CgiResponseParser() {}

CgiResponseParser::~CgiResponseParser() {}

CgiResponseParser::CgiResponseParser(const CgiResponseParser& other) {
    (void)other;
}

CgiResponseParser& CgiResponseParser::operator=(const CgiResponseParser& other) {
    (void)other;
    return *this;
}
