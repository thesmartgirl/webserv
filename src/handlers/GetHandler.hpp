#pragma once

#include "IHandler.hpp"

class GetHandler : public IHandler {
public:
    GetHandler();
    ~GetHandler();
    GetHandler(const GetHandler& other);
    GetHandler& operator=(const GetHandler& other);
    HttpResponse handle(const HttpRequest& req, const RouteContext& ctx);
};
