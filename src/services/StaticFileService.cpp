#include "StaticFileService.hpp"

HttpResponse StaticFileService::serveFile(const std::string& path, const RouteContext& ctx) const {
    (void)path;
    (void)ctx;
    return HttpResponse();
}

StaticFileService::StaticFileService() {}

StaticFileService::~StaticFileService() {}

StaticFileService::StaticFileService(const StaticFileService& other) {
    (void)other;
}

StaticFileService& StaticFileService::operator=(const StaticFileService& other) {
    (void)other;
    return *this;
}
