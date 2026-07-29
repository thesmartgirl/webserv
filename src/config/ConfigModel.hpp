#pragma once

#include <vector>
#include "ServerConfig.hpp"

struct ConfigModel {
    ConfigModel();
    ~ConfigModel();
    ConfigModel(const ConfigModel& other);
    ConfigModel& operator=(const ConfigModel& other);
    std::vector<ServerConfig> servers;
};
