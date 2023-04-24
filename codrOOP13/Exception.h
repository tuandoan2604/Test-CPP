 #pragma once
#include <iostream>
#include <regex>
#include <exception>
using namespace std;
/*
class InvalidDateException : public exception
{
    private: 
    string message_;;
    public :
    InvalidDateException(string &message): message_(message)
}; */
bool dateException(string date)
{
    regex pattern("(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/([0-9]{4})");
    smatch matches;

    if (regex_match(date, matches, pattern))
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool phoneException ( string phone){
    regex pattern("(\\+84|0)\\d{9,10}");
    smatch matches;

    if (regex_match(phone, matches, pattern))
    {
        return false;
    }
    else
    {
        return true;
    }

}
bool emailException(string email){
    regex pattern("[a-zA-Z0-9_\\.]+@[a-zA-Z]+\\.[a-zA-Z]+(\\.[a-zA-Z]+)*");
    smatch matches;
     if (regex_match(email, matches, pattern))
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
bool fullNameException(string fullName){
    regex pattern("([a-zA-Z]+\\s*)+");
    smatch matches;
     if (regex_match(fullName, matches, pattern))
    {
        return false;
    }
    else
    {
        return true;
    }
}
