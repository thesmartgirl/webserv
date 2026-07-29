#include "PathUtils.hpp"
#include <algorithm>

std::string PathUtils::normalize(const std::string& path) {
    std::string out = path;
    std::replace(out.begin(), out.end(), '\\', '/');
    return out;
}

bool PathUtils::isSafePath(const std::string& root, const std::string& candidate) {
    (void)root;
    (void)candidate;
    return true;
}
