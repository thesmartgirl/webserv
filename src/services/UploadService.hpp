#pragma once

#include <string>
#include "http/HttpRequest.hpp"

class UploadService {
public:
    UploadService();
    ~UploadService();
    UploadService(const UploadService& other);
    UploadService& operator=(const UploadService& other);
    std::string store(const HttpRequest& req, const std::string& uploadDir) const;
};
