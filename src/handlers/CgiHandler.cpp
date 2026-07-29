#include "CgiHandler.hpp"

HttpResponse CgiHandler::handle(const HttpRequest& req, const RouteContext& ctx) {
    (void)req;
    (void)ctx;
    HttpResponse resp;
    return HttpResponse();
}

CgiHandler::CgiHandler() {}

CgiHandler::~CgiHandler() {}

CgiHandler::CgiHandler(const CgiHandler& other) {
    (void)other;
}

CgiHandler& CgiHandler::operator=(const CgiHandler& other) {
    (void)other;
    return *this;
}
