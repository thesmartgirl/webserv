#pragma once

#include "IHandler.hpp"

class DeleteHandler : public IHandler {
public:
    DeleteHandler();
    ~DeleteHandler();
    DeleteHandler(const DeleteHandler& other);
    DeleteHandler& operator=(const DeleteHandler& other);
    HttpResponse handle(const HttpRequest& req, const RouteContext& ctx);
};
