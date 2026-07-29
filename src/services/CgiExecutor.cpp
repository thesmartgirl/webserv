#include "CgiExecutor.hpp"

std::string CgiExecutor::execute(const HttpRequest& req, const std::string& scriptPath,
                                 const std::vector<std::string>& envp, int timeoutMs) const {
    (void)req;
    (void)scriptPath;
    (void)envp;
    (void)timeoutMs;
    return std::string();
}

CgiExecutor::CgiExecutor() {}

CgiExecutor::~CgiExecutor() {}

CgiExecutor::CgiExecutor(const CgiExecutor& other) {
    (void)other;
}

CgiExecutor& CgiExecutor::operator=(const CgiExecutor& other) {
    (void)other;
    return *this;
}
