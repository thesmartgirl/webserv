#include "RouteContext.hpp"

RouteContext::RouteContext() : server(0), match() {}

RouteContext::~RouteContext() {}

RouteContext::RouteContext(const RouteContext& other) : server(other.server), match(other.match) {}

RouteContext& RouteContext::operator=(const RouteContext& other) {
    if (this != &other) {
        server = other.server;
        match = other.match;
    }
    return *this;
}
