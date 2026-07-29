#include "ServerConfig.hpp"

ServerConfig::ServerConfig()
	: listenHost(), listenPort(0), serverNames(), clientMaxBodySize(0), errorPages(), locations() {}

ServerConfig::~ServerConfig() {}

ServerConfig::ServerConfig(const ServerConfig& other)
	: listenHost(other.listenHost), listenPort(other.listenPort), serverNames(other.serverNames), clientMaxBodySize(other.clientMaxBodySize), errorPages(other.errorPages), locations(other.locations) {}

ServerConfig& ServerConfig::operator=(const ServerConfig& other) {
	if (this != &other) {
		listenHost = other.listenHost;
		listenPort = other.listenPort;
		serverNames = other.serverNames;
		clientMaxBodySize = other.clientMaxBodySize;
		errorPages = other.errorPages;
		locations = other.locations;
	}
	return *this;
}
