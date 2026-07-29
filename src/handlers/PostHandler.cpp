#include "PostHandler.hpp"

HttpResponse PostHandler::handle(const HttpRequest& req, const RouteContext& ctx) {
    (void)req;
    (void)ctx;
    HttpResponse resp;
    return resp;
}

PostHandler::PostHandler() {}

PostHandler::~PostHandler() {}

PostHandler::PostHandler(const PostHandler& other) {
    (void)other;
}

PostHandler& PostHandler::operator=(const PostHandler& other) {
    (void)other;
    return *this;
}
