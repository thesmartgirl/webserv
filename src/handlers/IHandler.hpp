#pragma once

#include "http/HttpRequest.hpp"
#include "http/HttpResponse.hpp"
#include "routing/RouteContext.hpp"

class IHandler {
public:
    IHandler();
    virtual ~IHandler();
    IHandler(const IHandler& other);
    IHandler& operator=(const IHandler& other);
    virtual HttpResponse handle(const HttpRequest& req, const RouteContext& ctx) = 0;
};
