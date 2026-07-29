#include "FdWrapper.hpp"
#include <unistd.h>

FdWrapper::FdWrapper(int fd) : _fd(fd) {}
FdWrapper::FdWrapper() : _fd(-1) {}

FdWrapper::~FdWrapper() {
    if (_fd >= 0) {
        close(_fd);
    }
}

int FdWrapper::get() const { return _fd; }

int FdWrapper::release() {
    int out = _fd;
    _fd = -1;
    return out;
}

void FdWrapper::reset(int newFd) {
    if (_fd >= 0) {
        close(_fd);
    }
    _fd = newFd;
}
FdWrapper::FdWrapper(const FdWrapper& other) : _fd(-1) { (void)other; }

FdWrapper& FdWrapper::operator=(const FdWrapper& other) {
    if (this != &other) {
        if (_fd >= 0) close(_fd);
        _fd = -1; // do not duplicate fd
    }
    return *this;
}
