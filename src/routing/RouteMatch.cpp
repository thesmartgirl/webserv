#include "RouteMatch.hpp"

RouteMatch::RouteMatch() : location(0), resolvedPath() {}

RouteMatch::~RouteMatch() {}

RouteMatch::RouteMatch(const RouteMatch& other) : location(other.location), resolvedPath(other.resolvedPath) {}

RouteMatch& RouteMatch::operator=(const RouteMatch& other) {
    if (this != &other) {
        location = other.location;
        resolvedPath = other.resolvedPath;
    }
    return *this;
}
