#pragma once

#include <string>
#include <vector>

struct LocationConfig {
    LocationConfig();
    ~LocationConfig();
    LocationConfig(const LocationConfig& other);
    LocationConfig& operator=(const LocationConfig& other);
    std::string pathPrefix;
    std::string root;
    std::vector<std::string> indexFiles;
    bool autoindex;
    std::vector<std::string> allowedMethods;
    std::string uploadDir;
};
