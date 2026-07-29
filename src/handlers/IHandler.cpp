#include "IHandler.hpp"

IHandler::IHandler() {}

IHandler::~IHandler() {}

IHandler::IHandler(const IHandler& other) {
    (void)other;
}

IHandler& IHandler::operator=(const IHandler& other) {
    (void)other;
    return *this;
}
