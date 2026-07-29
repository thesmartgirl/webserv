#include "LocationConfig.hpp"

LocationConfig::LocationConfig()
    : pathPrefix(), root(), indexFiles(), autoindex(false), allowedMethods(), uploadDir() {}

LocationConfig::~LocationConfig() {}

LocationConfig::LocationConfig(const LocationConfig& other)
    : pathPrefix(other.pathPrefix), root(other.root), indexFiles(other.indexFiles), autoindex(other.autoindex), allowedMethods(other.allowedMethods), uploadDir(other.uploadDir) {}

LocationConfig& LocationConfig::operator=(const LocationConfig& other) {
    if (this != &other) {
        pathPrefix = other.pathPrefix;
        root = other.root;
        indexFiles = other.indexFiles;
        autoindex = other.autoindex;
        allowedMethods = other.allowedMethods;
        uploadDir = other.uploadDir;
    }
    return *this;
}
