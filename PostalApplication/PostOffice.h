#pragma once

#include <string>
#include <vector>

class PostOffice
{
public:
    std::string number;
    std::string address;
    std::string district;
    std::vector<std::string> newspapers;

    PostOffice(const std::string& number, const std::string& address, const std::string& district)
        : number(number), address(address), district(district) {}
};
