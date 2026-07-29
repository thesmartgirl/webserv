#pragma once

#include "config/LocationConfig.hpp"
#include "http/HttpRequest.hpp"

struct RouteMatch {
    RouteMatch();
    ~RouteMatch();
    RouteMatch(const RouteMatch& other);
    RouteMatch& operator=(const RouteMatch& other);
    const LocationConfig* location;
    std::string resolvedPath;
};
