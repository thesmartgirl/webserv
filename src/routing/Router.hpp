#pragma once

#include "config/ConfigModel.hpp"
#include "config/ServerConfig.hpp"
#include "http/HttpRequest.hpp"
#include "RouteMatch.hpp"

class Router {
public:
    Router();
    explicit Router(const ConfigModel& config);
    ~Router();
    Router(const Router& other);
    Router& operator=(const Router& other);
    RouteMatch resolve(const ServerConfig& server, const HttpRequest& request) const;
};
