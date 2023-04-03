#include <stdexcept>
#include <iostream>
#include <vector>

std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    std::vector<std::string> reformattedDates;

    for (const auto& date : dates) {
        if (date.size() == 10 && ( (date[4]=='/' && date[7]=='/') 
                                    || (date[2]=='/' && date[5]=='/')
                                    || (date[2]=='-' && date[5]=='-')  )) {
            std::string year, month, day;

            if (date[4] == '/') {
                year = date.substr(0, 4);
                month = date.substr(5, 2);
                day = date.substr(8, 2);
            } else if(date[2] == '-'){
                year = date.substr(6, 4);
                day = date.substr(3, 2);
                month = date.substr(0, 2);
            }
            else if(date[2] == '/'){
                year = date.substr(6, 4);
                month = date.substr(3, 2);
                day = date.substr(0, 2);
            }
            reformattedDates.push_back(year + month + day);
        }
    }
    
    return reformattedDates;
}


#ifndef RunTests
int main()
{
    std::vector<std::string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720","10-1002010" };
    std::vector<std::string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates)
    {
        std::cout << reformattedDate << std::endl;
    }
}
#endif
