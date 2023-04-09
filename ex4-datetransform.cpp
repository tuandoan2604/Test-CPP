#include <stdexcept>
#include <iostream>
#include <vector>
#include <regex>

std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    std::vector<std::string> result;
    std::regex pattern("(\\d{4})/(\\d{2})/(\\d{2})|(\\d{2})-(\\d{2})-(\\d{4})|(\\d{8})");
    std::smatch match;
    for (const auto& date : dates) {
        if (std::regex_match(date, match, pattern)) {
            if (match[1].matched) {
                result.push_back(match[1].str() + match[2].str() + match[3].str());
            } else if (match[4].matched) {
                result.push_back(match[6].str() + match[5].str() + match[4].str());
            } else if (match[7].matched) {
                result.push_back(match[7].str());
            }
        }
    }
    return result;
}

#ifndef RunTests

int main()
{
    std::vector<std::string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720"};
    std::vector<std::string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates) {
        std::cout << reformattedDate << std::endl;
    }
}

#endif