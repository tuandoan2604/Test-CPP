#ifndef DAY_H
#define DAY_H

#include <iostream>
#include "exceptionEmployee.h"

using namespace std;

class Day
{
    int year;
    int month;
    int day;
    
public:
    Day() 
    {
        year = 0;
        month = 0;
        day = 0;
    }

    Day(int year, int month, int day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    int getDay() {return day;}
    int getMonth() {return month;}
    int getYear() {return year;}

    void setDay(int day) {this->day = day;}
    void setMonth(int month) {this->month = month;}
    void setYear(int year) {this->year = year;}


    void showDay()
    {
        cout << day << "/" <<month << "/" << year << endl;
    }
};

Day createDay()
{
    int year;
    int month;
    int day;

    while (true)
    {
        cout << "Enter year: ";
        cin >> year;
        cin.ignore();
        try {
            if (cin.fail()) { throw DayException();}
            validateYear(year);
        }
        catch (DayException& e)
        {
            cerr << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    while (true)
    {
        cout << "Enter month: ";
        cin >> month;
        cin.ignore();
        try {
            if (cin.fail()) { throw DayException();}
            validateMonth(month);
        }
        catch (DayException& e)
        {
            cerr << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    while (true)
    {
        cout << "Enter Day: ";
        cin >> day;
        cin.ignore();
        try {
            if (cin.fail()) { throw DayException();}
            validateDay(day, month, year);
        }
        catch (DayException& e)
        {
            cerr << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    return Day(year, month, day);
}

#endif