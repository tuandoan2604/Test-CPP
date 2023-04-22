#include <stdexcept>
#include <iostream>
#include <vector>
#include <regex>

std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    std::vector<std::string> reformattedDates;
    // Định dạng thích hợp
    std::regex year_month_day_regex("\\d{4}/\\d{2}/\\d{2}");
    std::regex day_month_year_regex("\\d{2}/\\d{2}/\\d{4}");
    std::regex month_day_year_regex("\\d{2}-\\d{2}-\\d{4}");

    for (const auto& date : dates)
    {
        std::string year, month, day;
        if (std::regex_match(date, year_month_day_regex))
        {
            year = date.substr(0, 4);
            month = date.substr(5, 2);
            day = date.substr(8, 2);
        }
        else if (std::regex_match(date, day_month_year_regex))
        {
            day = date.substr(0, 2);
            month = date.substr(3, 2);
            year = date.substr(6, 4);
        }
        else if (std::regex_match(date, month_day_year_regex))
        {
            month = date.substr(0, 2);
            day = date.substr(3, 2);
            year = date.substr(6, 4);
        }
        if (!year.empty() && !month.empty() && !day.empty())
        {
            reformattedDates.push_back(year + month + day);
        }
    }

    return reformattedDates;
}


#ifndef RunTests
int main()
{
    std::vector<std::string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720","10-  -0010","11-1d-2010","11-20-1977" };
    std::vector<std::string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates)
    {
        std::cout << reformattedDate << std::endl;
    }
}
#endif
