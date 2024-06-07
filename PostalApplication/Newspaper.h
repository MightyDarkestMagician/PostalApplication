#pragma once

#include <string>

class Newspaper
{
public:
    std::string name;
    std::string topic;
    std::string index;
    std::string editorFirstName;
    std::string editorLastName;
    std::string editorMiddleName;
    int circulation;
    double price;

    Newspaper(const std::string& name, const std::string& topic, const std::string& index, const std::string& editorFirstName,
        const std::string& editorLastName, const std::string& editorMiddleName, int circulation, double price)
        : name(name), topic(topic), index(index), editorFirstName(editorFirstName),
        editorLastName(editorLastName), editorMiddleName(editorMiddleName),
        circulation(circulation), price(price) {}
};
