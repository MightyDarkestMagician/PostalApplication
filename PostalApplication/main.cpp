#include "pch.h"
#include "main.h"

std::vector<Newspaper> newspapers;
std::vector<PostOffice> postOffices;
std::vector<PrintingHouse> printingHouses;

void addNewspaper(const std::string& name, const std::string& topic, const std::string& index, const std::string& editorFirstName, const std::string& editorLastName, const std::string& editorMiddleName, int circulation, double price) {
    Newspaper newspaper(name, topic, index, editorFirstName, editorLastName, editorMiddleName, circulation, price);
    newspapers.push_back(newspaper);
}

void addPostOffice(const std::string& number, const std::string& address, const std::string& district) {
    PostOffice postOffice(number, address, district);
    postOffices.push_back(postOffice);
}

void addPrintingHouse(const std::string& name, const std::string& address, const std::string& directorFirstName, const std::string& directorLastName, const std::string& directorMiddleName) {
    PrintingHouse printingHouse(name, address, directorFirstName, directorLastName, directorMiddleName);
    printingHouses.push_back(printingHouse);
}

std::vector<std::string> getNewspapersByPrintingHouse(const std::string& printingHouseName) {
    std::vector<std::string> result;
    for (const auto& ph : printingHouses) {
        if (ph.name == printingHouseName) {
            for (const auto& newspaper : ph.newspapers) {
                result.push_back(newspaper.name);
            }
            break;
        }
    }
    return result;
}

std::vector<std::string> getPrintingHousesByNewspaper(const std::string& newspaperName) {
    std::vector<std::string> result;
    for (const auto& ph : printingHouses) {
        for (const auto& newspaper : ph.newspapers) {
            if (newspaper.name == newspaperName) {
                result.push_back(ph.name);
                break;
            }
        }
    }
    return result;
}

double getTotalCostByNewspaper(const std::string& newspaperName) {
    double totalCost = 0.0;
    for (const auto& newspaper : newspapers) {
        if (newspaper.name == newspaperName) {
            totalCost += newspaper.price * newspaper.circulation;
        }
    }
    return totalCost;
}

void saveResultsToFile(const std::vector<std::string>& results, const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& result : results) {
            outFile << result << std::endl;
        }
        outFile.close();
    }
}
