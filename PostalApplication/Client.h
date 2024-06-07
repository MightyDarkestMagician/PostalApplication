#pragma once
#include <string>

class Client {
public:
    std::string name;
    std::string address;
    std::string email;
    std::string phoneNumber;

    Client(const std::string& name, const std::string& address, const std::string& email, const std::string& phoneNumber)
        : name(name), address(address), email(email), phoneNumber(phoneNumber) {}
};
