#include "ConfigModel.hpp"

ConfigModel::ConfigModel() : servers() {}

ConfigModel::~ConfigModel() {}

ConfigModel::ConfigModel(const ConfigModel& other) : servers(other.servers) {}

ConfigModel& ConfigModel::operator=(const ConfigModel& other) {
    if (this != &other) {
        servers = other.servers;
    }
    return *this;
}
