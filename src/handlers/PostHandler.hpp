#pragma once

#include "IHandler.hpp"

class PostHandler : public IHandler {
public:
    PostHandler();
    ~PostHandler();
    PostHandler(const PostHandler& other);
    PostHandler& operator=(const PostHandler& other);
    HttpResponse handle(const HttpRequest& req, const RouteContext& ctx);
};
