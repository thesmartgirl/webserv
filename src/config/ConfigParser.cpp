#include "ConfigParser.hpp"
#include "ConfigModel.hpp"

ConfigParser::ConfigParser() {}

ConfigParser::~ConfigParser() {}

ConfigParser::ConfigParser(const ConfigParser& other) {
    (void)other;
}

ConfigParser& ConfigParser::operator=(const ConfigParser& other) {
    (void)other;
    return *this;
}

ConfigModel ConfigParser::parseFile(const char* path) const {
    (void)path;
    return ConfigModel();
}
