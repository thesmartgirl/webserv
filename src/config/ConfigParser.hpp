#pragma once

class ConfigModel;

class ConfigParser {
public:
    ConfigParser();
    ~ConfigParser();
    ConfigParser(const ConfigParser& other);
    ConfigParser& operator=(const ConfigParser& other);
    ConfigModel parseFile(const char* path) const;
};
