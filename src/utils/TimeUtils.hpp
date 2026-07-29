#pragma once

#include <ctime>

class TimeUtils {
public:
    static std::time_t now();
    TimeUtils();
    ~TimeUtils();
    TimeUtils(const TimeUtils& other);
    TimeUtils& operator=(const TimeUtils& other);
};
