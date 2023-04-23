#ifndef INTERN_H
#define INTERN_H

#include "employee.h"

class Intern : public Employee
{
private:
    string major;
    char semester;
    string univer;
public:
    Intern() {}

    Intern(string id, string fullName, Day birthday, string phone, string email, vector<Certificate> cerList, string major, char semester, string univer) : Employee(id, fullName, birthday, phone, email, cerList)
    {
        this->major = major;
        this->semester = semester;
        this->univer = univer;
    }

    ~Intern() {}

    void setMajor(string major) {this->major = major;}
    void setSemester (char semester) {this->semester = semester;}
    void setUniver (string univer) {this->univer = univer;}

    string getMajor() {return major;}
    char getSemester () {return semester;}
    string getUniver () {return univer;}

    void showInfo() 
    {
        cout << "Information Intern\n";
        Employee::showInfo();
        cout <<"Majors: " << major << endl;
        cout << "Semester: " << semester << endl;
        cout << "University: " << univer << endl;
    }
};

Intern* creatIntern()
{
    string id;
    string fullName; 
    Day birthday;
    string phone;
    string email;
    vector<Certificate> cerList;
    string major;
    char semester;
    string univer;

    cout << "Enter id: ";
    getline(cin, id);
    creatFullName(fullName);
    creatDay(birthday);
    creatPhone(phone);
    creatEmail(email);
    creatCerList(cerList);
    cout << "Enter major: ";
    getline(cin, major);
    cout << "Enter semester: ";
    cin >> semester;
    cin.ignore();
    cout << "Enter univer: ";
    getline(cin, univer);
    return new Intern(id, fullName, birthday, phone, email, cerList, major, semester, univer);
}

#endif