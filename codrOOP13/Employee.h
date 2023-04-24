#include "Certificate.h"
#include <vector>
#include <string>
#include <regex>
#include "Exception.h"
#pragma once
#include <iostream>
#define EXPERIENCE 0
#define FRESHER 1
#define INTERN 2 
using namespace std;
class Employee
{
private:
    vector<Certificate *> listCertificate;
    int ID;
    string fullName;
    string birthDay;
    string phone;
    string email;
    int employeeType;
    static int employeeCout;

public:
    int getID() { return this->ID; }

    void setID(int ID) { this->ID = ID; }

    string getFullName() { return this->fullName; }

    void setFullName(string fullName) { this->fullName = fullName; }

    string getBirthDay() { return this->birthDay; }

    void setBirthDay(string birthDay) { this->birthDay = birthDay; }

    string getPhone() { return this->phone; }

    void setPhone(string phone) { this->phone = phone; }

    string getEmail() { return this->email; }

    void setEmail(string email) { this->email = email; }

    virtual int getEmployeeType() {return 0; }

     void setEmployeeType( int employee){ this->employeeType =employeeType ;}
    

    Employee(/* args */);
    Employee(int ID, string fullName, string birthDay, string phone, string email, int employeeType)
    {
        this->ID = ID;
        this->fullName;
        this->birthDay = birthDay;
        this->email = email;
        this->employeeType = employeeType;
    }
    void addCertificate()
    {
        Certificate *certificate;
        int certificatedID;
        string certificateName;
        int certificateRank;
        string cretificateDate;
        cout << "Enter certificatedID :" << endl;
        cin >> certificatedID;
        cout << "Enter name of certificated :" << endl;
        cin.ignore();
        getline(cin, certificateName);
        cout << "Enter rank of certificated :" << endl;
        cin >> certificateRank;
        
        bool checkDay = true;
        do
        {
            cout << "Enter date of certificated (dd/mm/yyyy) :" << endl;
            cin.ignore();
            getline(cin,cretificateDate);
            checkDay=dateException(cretificateDate);
           
            

        } while (checkDay);
        certificate = new Certificate(certificatedID, certificateName, certificateRank, cretificateDate);
        listCertificate.push_back(certificate);
    }
    virtual void showMe()
    {

        cout << "Employee ID :" << getID() << endl;
        cout << "Employee name :" <<getFullName() << endl;
        cout << "Employee birthday :" << getBirthDay() << endl;
        cout << "Employee phone:" << getPhone() << endl;
        cout << "Employee email :" << getEmail() << endl;
        for(int i=0; i<listCertificate.size(); i++){
            listCertificate[i]->display();
            cout<<"-------------"<<endl;
        }

        
    }

    virtual ~Employee();
};
int Employee :: employeeCout =0;
Employee::Employee(/* args */)
{
    employeeCout++;
}

Employee::~Employee()
{
}
