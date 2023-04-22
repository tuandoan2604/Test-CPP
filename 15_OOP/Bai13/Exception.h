#pragma once

#include <regex>
#include <iostream>
#include <string>
using namespace std;


void Date_valid(string &date){
    regex day_month_year_regex("(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/([0-9]{4})");
    // cin.ignore();
    getline(cin, date);
    while(!regex_match(date, day_month_year_regex)){
        cout <<"Invalid Date! Please enter in the correct format: dd/mm/yyyy !! \n";
        getline(cin, date);
    }
}

void Email_valid(string &email){
    regex email_regex("[a-zA-Z0-9_\\.]+@[a-zA-Z]+\\.[a-zA-Z]+(\\.[a-zA-Z]+)*");
    getline(cin, email);
    while(!regex_match(email, email_regex)){
        cout <<"Invalid Email! try again!! \n";
        getline(cin, email);
    }
}

void Phone_valid(string &phone){
    regex phone_regex("(\\+84|0)\\d{9,10}");
    getline(cin, phone);
    while(!regex_match(phone, phone_regex)){
        cout <<"Invalid phone! try again!! \n";
        getline(cin, phone);
    }
}

void Name_valid(string &name){
    regex Name_regex("([a-zA-Z]+\\s*)+");
    cin.ignore();
    getline(cin, name);
    while(!regex_match(name, Name_regex)){
        cout <<"Invalid name! try again!! \n";
        getline(cin, name);
    }
}