#pragma once

#include <string>

class StatusTexts {
public:
    static std::string reasonPhrase(int statusCode);
    StatusTexts();
    ~StatusTexts();
    StatusTexts(const StatusTexts& other);
    StatusTexts& operator=(const StatusTexts& other);
};
