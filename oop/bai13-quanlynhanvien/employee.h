#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "day.h"
#include "certificated.h"
#include <vector>

using namespace std;

class Employee
{
    static int employeeCount;
    string id;
    string fullName; 
    Day birthday;
    string phone;
    string email;
    vector<Certificate> cerList;

public:
    Employee(string id, string fullName, Day birthday, string phone, string email) 
    {
        employeeCount++;
        this->id = id;
        this->fullName = fullName;
        this->birthday = birthday;
        this->phone = phone;
        this->email = email;
    }

    Employee(string id, string fullName, Day birthday, string phone, string email, vector<Certificate> cerList) 
    {
        employeeCount++;
        this->id = id;
        this->fullName = fullName;
        this->birthday = birthday;
        this->phone = phone;
        this->email = email;
        this->cerList = cerList;
    }

    Employee()
    {
        employeeCount++;
    }

    void setId(string id) {this->id = id;}
    void setFullName(string fullName) {this->fullName = fullName;}
    void setBirthday(Day birthday) {this->birthday = birthday;}
    void setPhone (string phone) {this->phone = phone;}
    void setEmail (string email) {this->email = email;}

    string getId() {return id;}
    string getFullName() {return fullName;}
    Day getBirthday() {return birthday;}
    string getPhone () {return phone;}
    string getEmail () {return email;}

    void addCertificate(Certificate cer)
    {
        cerList.push_back(cer);
    }

    virtual ~Employee() {
        employeeCount--;
    }

    virtual void showInfo()
    {
        cout << "Employee Count: " << employeeCount << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Fullname: " << fullName << endl;
        cout << "Birthday: ";
        birthday.showDay();
        cout << "Phone number: " << phone << endl;
        cout << "Email: " << email << endl;
        for(auto it : cerList)
        {
            it.showCer();
        }
    }
    
};

int Employee::employeeCount = 0;

void creatFullName(string& fullName)
{
    while (true)
    {
        cout << "Enter fullname: ";
        getline(cin, fullName);
        Document dc(fullName);
        dc.standardizedDoc();
        fullName = dc.getString();
        try
        {
            validateFullName(fullName);
            break;
        }
        catch(FullNameException& e)
        {
            cerr << e.what() << '\n';
            continue;
        }
        
    }
}

void creatDay(Day& day)
{
    int year = 0;
    int month = 0;
    int oday = 0;
        while (true)
        {
            cout << "Enter year: ";
            cin >> year;
            cin.ignore();
            try
            {
                if (cin.fail()) { throw DayException();}
                validateYear(year);
                day.setYear(year);
                break;
            }
            catch(DayException& e)
            {
                std::cerr << e.what() << '\n';
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            
        }      

        while (true)
        {
            cout << "Enter month: ";
            cin >> month;
            cin.ignore();
            try
            {
                if (cin.fail()) { throw DayException();}
                validateMonth(month);
                day.setMonth(month);
                break;
            }
            catch(DayException& e)
            {
                std::cerr << e.what() << '\n';
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            
        }    
    
        while (true)
        {
            cout << "Enter day: ";
            cin >> oday;
            cin.ignore();
            try
            {
                if (cin.fail()) { throw DayException();}
                validateDay(oday, month, year);
                day.setDay(oday);
                break;
            }
            catch(DayException& e)
            {
                std::cerr << e.what() << '\n';
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            
        }    
    
}

void creatPhone(string& phone)
{
    while(true)
    {
        cout << "Enter phone number: ";
        getline(cin, phone);
        try
        {
            PhoneException();
            break;
        }
        catch(PhoneException& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}

void creatEmail(string& email)
{
    while (true)
    {
        /* code */
        cout << "Enter email: ";
        getline(cin,email);
        try
        {
            validateEmail(email);
            break;
        }
        catch(EmailException& e)
        {
            std::cerr << e.what() << '\n';
        }  
    }
    
}

Certificate creatCer()
{
    string certificateId;
    string certificateName;
    string certificateRank;
    Day certificatedDate;

    cout << "Enter certificateId: ";
    getline(cin, certificateId);
    cout << "Enter certificate name: ";
    getline(cin, certificateName);
    cout << "Enter certificate rank: ";
    getline(cin, certificateRank);
    creatDay(certificatedDate);
    return Certificate(certificateId, certificateName, certificateRank, certificatedDate);
}

void creatCerList(vector<Certificate>& cerList)
{
    int select = 0;
    while (true)
    {
        cout << "Do you want add certificated?: ";
        cout << "1 - Add certificate\nother number - end\n";
        cout << "Your select: ";
        cin >> select;
        cin.ignore();
        try {
            if (cin.fail()) { throw "invalid input";}
            switch (select)
            {
            case 1:
                cerList.push_back(creatCer());
                cout << cerList.size();
                break;
            
            default:
                break;
            }  
            if(select != 1) {break;}  
        }
        catch (const char* msg)
        {
            cerr << "exception" << msg << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }
}

#endif