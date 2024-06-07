#pragma once

#include <string>
#include <vector>
#include "Newspaper.h"

class PrintingHouse
{
public:
    std::string name;
    std::string address;
    std::vector<Newspaper> newspapers;
    std::string directorFirstName;
    std::string directorLastName;
    std::string directorMiddleName;

    PrintingHouse(const std::string& name, const std::string& address, const std::string& directorFirstName,
        const std::string& directorLastName, const std::string& directorMiddleName)
        : name(name), address(address), directorFirstName(directorFirstName),
        directorLastName(directorLastName), directorMiddleName(directorMiddleName) {}
};
