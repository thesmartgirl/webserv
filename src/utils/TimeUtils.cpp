#include "TimeUtils.hpp"

std::time_t TimeUtils::now() {
    return std::time(0);
}

TimeUtils::TimeUtils() {}

TimeUtils::~TimeUtils() {}

TimeUtils::TimeUtils(const TimeUtils& other) { (void)other; }

TimeUtils& TimeUtils::operator=(const TimeUtils& other) { (void)other; return *this; }
