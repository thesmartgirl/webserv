#pragma once

class FdWrapper {
public:
    explicit FdWrapper(int fd = -1);
    FdWrapper();
    ~FdWrapper();
    FdWrapper(const FdWrapper& other);
    FdWrapper& operator=(const FdWrapper& other);

    int get() const;
    int release();
    void reset(int newFd = -1);

private:
    int _fd;
};
