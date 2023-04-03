#include <iostream>
#include <vector>
#include <stdexcept>

std::vector<std::string> convert_date(const std::vector<std::string>& dates) {
    std::vector<std::string> formated_vector;
    for(auto date : dates){
        std::vector<std::string> date_parts;
        std::string temp = "";
        for (char c : date) {
            if (c == '/' || c == '-' || c == ' ') {
                date_parts.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        date_parts.push_back(temp);
        std::string new_date;
        if (date_parts[0].size() == 4) {
            new_date = date_parts[0] + date_parts[1] + date_parts[2];
        } else if (date_parts[2].size() == 4) {
            new_date = date_parts[2] + date_parts[1] + date_parts[0];
        } else {
            new_date = date;
        }
        formated_vector.push_back(new_date);
        return formated_vector;
    } 
}