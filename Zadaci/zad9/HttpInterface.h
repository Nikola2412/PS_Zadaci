#pragma once

#include <string>
#include <unordered_map>

class HttpInterface {
public:
    virtual int get(
        const std::string& address,
        const std::unordered_map<std::string, std::string>& parameters
    ) = 0;

    virtual std::string post(
        const std::string& address,
        const std::unordered_map<std::string, std::string>& parameters
    ) = 0;
};

#include "ApacheAdapter.h"