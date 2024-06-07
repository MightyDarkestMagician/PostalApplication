#pragma once

#include "Newspaper.h"
#include "PostOffice.h"
#include "PrintingHouse.h"
#include <vector>
#include <string>

extern std::vector<Newspaper> newspapers;
extern std::vector<PostOffice> postOffices;
extern std::vector<PrintingHouse> printingHouses;

void addNewspaper(const std::string& name, const std::string& topic, const std::string& index, const std::string& editorFirstName, const std::string& editorLastName, const std::string& editorMiddleName, int circulation, double price);
void addPostOffice(const std::string& number, const std::string& address, const std::string& district);
void addPrintingHouse(const std::string& name, const std::string& address, const std::string& directorFirstName, const std::string& directorLastName, const std::string& directorMiddleName);
std::vector<std::string> getNewspapersByPrintingHouse(const std::string& printingHouseName);
std::vector<std::string> getPrintingHousesByNewspaper(const std::string& newspaperName);
double getTotalCostByNewspaper(const std::string& newspaperName);
void saveResultsToFile(const std::vector<std::string>& results, const std::string& filename);
