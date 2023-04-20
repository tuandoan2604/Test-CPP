#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    // throw std::logic_error("Waiting to be implemented");
    vector <string> output; // of YYYYMMDD

    for(int i=0; i < dates.size(); i++)
    {
        string str;
        if (dates[i].length() == 10)
        {
            string year, month, day;
            if(dates[i][2] == '/')
            {
                day = dates[i].substr(0,2);
                month = dates[i].substr(3,2);
                year = dates[i].substr(6,4);
            }
            if(dates[i][2] == '-')
            {
                day = dates[i].substr(3,2);
                month = dates[i].substr(0,2);
                year = dates[i].substr(6,4);
            }
            if(dates[i][4] == '/')
            {
                day = dates[i].substr(8,2);
                month = dates[i].substr(5,2);
                year = dates[i].substr(0,4);
            }
            str = year + month + day;
        }
        output.push_back(str);
    }

    return output;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720"};

    std::vector<std::string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates)
    {
        std::cout << reformattedDate << std::endl;
    }
}
#endif
