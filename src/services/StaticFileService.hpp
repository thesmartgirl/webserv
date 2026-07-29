#pragma once

#include <string>
#include "routing/RouteContext.hpp"
#include "http/HttpResponse.hpp"

class StaticFileService {
public:
    StaticFileService();
    ~StaticFileService();
    StaticFileService(const StaticFileService& other);
    StaticFileService& operator=(const StaticFileService& other);
    HttpResponse serveFile(const std::string& path, const RouteContext& ctx) const;
};
