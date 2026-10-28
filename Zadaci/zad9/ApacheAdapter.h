#pragma once
#include "HttpInterface.h"

#include <iostream>

class ApacheAdapter : public HttpInterface {
public:
    int get(
        const std::string& address,
        const std::unordered_map<std::string, std::string>& parameters
    ) {
        std::cout << "[FAKE GET] " << address << '\n';

        for (const auto& p : parameters) {
            std::cout << "  " << p.first << " = "
                << p.second << '\n';
        }

        std::cout << "Response Body: {\"message\":\"Fake GET success\"}\n";
        return 200;
    }

    std::string post(
        const std::string& address,
        const std::unordered_map<std::string, std::string>& parameters
    ) {
        std::cout << "[FAKE POST] " << address << '\n';

        for (const auto& p : parameters) {
            std::cout << p.first << " = " << p.second << '\n';
        }

        return R"({"message":"Fake POST success"})";
    }
};