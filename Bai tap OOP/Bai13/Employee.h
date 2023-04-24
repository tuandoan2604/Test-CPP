#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Header.h"
#include "Certificate.h"


class Employee
{
private:
    /* data */
    int ID;
    string full_name;
    string birthday;
    string phone;
    string email;
    int employee_type;
    static int employee_count;

    vector<Certificate> certificates;
public:
    Employee(/* args */);
    ~Employee();

    int getID(){return ID;}
    string getName(){return full_name;}
    string getBirthday(){return birthday;}
    string getPhone(){return phone;}
    string getMail(){return email;}
    int getType(){return employee_type;}
    int getCount(){return employee_count;}

    // void setID(int ID){this->ID = ID;}
    // void setFullname(string full_name){this->full_name = full_name;}
    // void setBirthday(int birthday){this->birthday = birthday;}
    // void setPhone(string phone){this->phone = phone;}
    // void setMail(string email){this->email = email;}
    // void setType(int employee_type){this->employee_type = employee_type;}

    virtual void showMe() = 0;

    virtual void setType(int type){employee_type = type;};

    void setup_information();
};

Employee::Employee(/* args */)
{
    employee_count++;
}

Employee::~Employee()
{
}

void Employee::setup_information()
{
    cout<< "Enter the employee's ID: ";
    cin>> ID;

    cout<< "Enter the employee's full name: ";
    cin.ignore();
    getline(cin, full_name);

    cout<< "Enter the employee's birthday (DDMMYYY): ";
    getline(cin, birthday);

    cout<< "Enter the employee's phone: ";
    getline(cin, phone);

    cout<< "Enter the employee's email: ";
    getline(cin, email);
}

#endif