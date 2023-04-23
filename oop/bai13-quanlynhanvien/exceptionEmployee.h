#ifndef EXEPTIONEMPLOYEE_H
#define EXEPTIONEMPLOYEE_H

#include <iostream>
#include <exception>
#include <string>
#include <regex>

using namespace std;

class DayException : public exception
{
public:
    const char* what() const throw() {
        return "Invalid day";
    }
};

void validateDay (const int& day, const int& month, const int& year)
{
    switch (month)
    {
    case 1:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;

    case 2:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    
    case 3:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    
    case 4:
        if(day > 30 || day < 1)
        {
            throw DayException();
        }
        break;
    
    case 5:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    
    case 6:
        if(day > 30 || day < 1)
        {
            throw DayException();
        }
        break;
    case 7:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    case 8:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    case 9:
        if(day > 30 || day < 1)
        {
            throw DayException();
        }
        break;
    case 10:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    case 11:
        if(day > 30 || day < 1)
        {
            throw DayException();
        }
        break;
    case 12:
        if(day > 31 || day < 1)
        {
            throw DayException();
        }
        break;
    }
}

void validateMonth (const int& month)
{
    if(month < 1 || month > 12)
    {
        throw DayException();
    }
}

void validateYear (const int& year)
{
    if (year < 1800 || year > 2030)
    {
        throw DayException();
    }
}

class PhoneException : public exception
{
public: 
    const char* what() const throw() {
        return "Invalid phone";
    }
};

void validatePhoneNumber(const string& phone)
{
    if(phone.length()!=10)
    {
        throw PhoneException();
    }

    for(char c : phone)
    {
        if(!isdigit(c))
        {
            throw PhoneException();
        }
    }
}

class EmailException : public exception
{
public: 
    const char* what() const throw() {
        return "Invalid email";
    }
};

void validateEmail(const string& email) {
    regex pattern("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!regex_match(email, pattern)) {
        throw EmailException();
    }
}

class FullNameException : public exception
{
public: 
    const char* what() const throw() {
        return "Invalid Full Name";
    }
};

void validateFullName (const string& fullName)
{
    size_t spaceIndex = fullName.find(' ');
    if (spaceIndex == string::npos)
    {
        throw FullNameException();
    }

    for (char c : fullName)
    {
        if (!isalpha(c) && c != ' ') 
        {
            throw FullNameException();
        }
    }
}
#endif