#pragma once

#include <map>
#include <vector>
#include "../utils/Logger.hpp"

class Server;
class ServerManager;

class EventLoop {
public:
    EventLoop();
    explicit EventLoop(ServerManager& manager);
    ~EventLoop();
    EventLoop(const EventLoop& other);
    EventLoop& operator=(const EventLoop& other);

    void run();

private:
    ServerManager* _manager;
};
