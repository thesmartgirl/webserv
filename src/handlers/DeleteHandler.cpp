#include "DeleteHandler.hpp"

HttpResponse DeleteHandler::handle(const HttpRequest& req, const RouteContext& ctx) {
    (void)req;
    (void)ctx;
    HttpResponse resp;
    return resp;
}

DeleteHandler::DeleteHandler() {}

DeleteHandler::~DeleteHandler() {}

DeleteHandler::DeleteHandler(const DeleteHandler& other) {
    (void)other;
}

DeleteHandler& DeleteHandler::operator=(const DeleteHandler& other) {
    (void)other;
    return *this;
}
