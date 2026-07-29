#pragma once

#include "IHandler.hpp"

class CgiHandler : public IHandler {
public:
    CgiHandler();
    ~CgiHandler();
    CgiHandler(const CgiHandler& other);
    CgiHandler& operator=(const CgiHandler& other);
    HttpResponse handle(const HttpRequest& req, const RouteContext& ctx);
};
