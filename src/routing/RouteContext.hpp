#pragma once

#include "config/ServerConfig.hpp"
#include "routing/RouteMatch.hpp"

struct RouteContext {
    RouteContext();
    ~RouteContext();
    RouteContext(const RouteContext& other);
    RouteContext& operator=(const RouteContext& other);
    const ServerConfig* server;
    RouteMatch match;
};
