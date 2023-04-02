#include <stdexcept>
#include <iostream>
#include <vector>
// #include <cstring>
using namespace std;
vector<string> transformDateFormat(const vector<string> &dates)
{
    vector<string> newTransformDateFormat;

    for (auto const &date1 : dates)
    {
        if (date1[4] == '/')
        {
            string newDate = date1.substr(0, 4) + date1.substr(5, 2) + date1.substr(8, 2);
            newTransformDateFormat.push_back(newDate);
        }
        else if (date1[2] == '/')
        {
            string newDate = date1.substr(6, 4) + date1.substr(3, 2) + date1.substr(0, 2);
            newTransformDateFormat.push_back(newDate);
        }
        else if (date1[2] == '-')
        {
            string newDate = date1.substr(6, 4) + date1.substr(3, 2) + date1.substr(0, 2);
            newTransformDateFormat.push_back(newDate);
        }
    }
    return newTransformDateFormat;
}

#ifndef RunTests
int main()
{
    vector<string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720"};
    vector<string> reformattedDates = transformDateFormat(dates);
    for (auto const &reformattedDate : reformattedDates)
    {
        std::cout << reformattedDate << std::endl;
    }
}
#endif
