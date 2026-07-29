#include "UploadService.hpp"

std::string UploadService::store(const HttpRequest& req, const std::string& uploadDir) const {
    (void)req;
    (void)uploadDir;
    return std::string();
}

UploadService::UploadService() {}

UploadService::~UploadService() {}

UploadService::UploadService(const UploadService& other) {
    (void)other;
}

UploadService& UploadService::operator=(const UploadService& other) {
    (void)other;
    return *this;
}
