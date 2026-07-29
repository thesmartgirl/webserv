#pragma once

#include <string>
#include <vector>
#include "http/HttpRequest.hpp"

class CgiExecutor {
public:
    CgiExecutor();
    ~CgiExecutor();
    CgiExecutor(const CgiExecutor& other);
    CgiExecutor& operator=(const CgiExecutor& other);
    std::string execute(const HttpRequest& req, const std::string& scriptPath,
                        const std::vector<std::string>& envp, int timeoutMs) const;
};
