#pragma once

#include <string>

class MimeTypes {
public:
    static std::string fromPath(const std::string& path);
    MimeTypes();
    ~MimeTypes();
    MimeTypes(const MimeTypes& other);
    MimeTypes& operator=(const MimeTypes& other);
};
