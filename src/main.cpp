#include "app/ServerManager.hpp"
#include "utils/Logger.hpp"

int main() {

    Logger::info("webserve bootstrap starting");

    ServerManager manager;
    manager.initialize("config/default.conf");
    manager.run();

    Logger::info("webserve bootstrap exiting");
    return 0;
}
