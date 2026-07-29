#include "MimeTypes.hpp"

std::string MimeTypes::fromPath(const std::string& path) {
    (void)path;
    return "text/plain";
}

MimeTypes::MimeTypes() {}

MimeTypes::~MimeTypes() {}

MimeTypes::MimeTypes(const MimeTypes& other) { (void)other; }

MimeTypes& MimeTypes::operator=(const MimeTypes& other) { (void)other; return *this; }
