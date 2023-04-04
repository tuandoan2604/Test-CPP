// #include <iostream>
// #include <unordered_map>
// #include <memory>
// #include <functional>

// class FunctionCache
// {

// public:
//     FunctionCache(std::function<int(int, int)> function): function(function) {}

//     std::function<int(int, int)> function;
// };


#include <stdexcept>
#include <iostream>
#include <vector>
#include <regex>

using namespace std;

std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    vector<string> reformattedDates;
    regex reg(R"([-[\]{}()*+?.,/\^$|#\s])");
    for (const auto& date : dates)
    {   
        reformattedDates.push_back(regex_replace(date, reg, ""));
    }
    return reformattedDates;
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
