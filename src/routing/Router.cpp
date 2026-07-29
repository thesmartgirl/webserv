#include "Router.hpp"

Router::Router(const ConfigModel& config) {
    (void)config;
}

Router::Router() {}

Router::~Router() {}

Router::Router(const Router& other) {
    (void)other;
}

Router& Router::operator=(const Router& other) {
    (void)other;
    return *this;
}

RouteMatch Router::resolve(const ServerConfig& server, const HttpRequest& request) const {
    (void)server;
    (void)request;
    RouteMatch m;
    m.location = 0;
    m.resolvedPath = "";
    return m;
}
