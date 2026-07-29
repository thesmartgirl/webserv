#pragma once

#include <map>
#include <string>
#include <vector>
#include "LocationConfig.hpp"

struct ServerConfig {
    ServerConfig();
    ~ServerConfig();
    ServerConfig(const ServerConfig& other);
    ServerConfig& operator=(const ServerConfig& other);
    std::string listenHost;
    int listenPort;
    std::vector<std::string> serverNames;
    size_t clientMaxBodySize;
    std::map<int, std::string> errorPages;
    std::vector<LocationConfig> locations;
};
