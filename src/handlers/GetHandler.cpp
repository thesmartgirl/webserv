#include "GetHandler.hpp"

HttpResponse GetHandler::handle(const HttpRequest& req, const RouteContext& ctx) {
    (void)req;
    (void)ctx;
    HttpResponse resp;
    return resp;
}

GetHandler::GetHandler() {}

GetHandler::~GetHandler() {}

GetHandler::GetHandler(const GetHandler& other) {
    (void)other;
}

GetHandler& GetHandler::operator=(const GetHandler& other) {
    (void)other;
    return *this;
}
