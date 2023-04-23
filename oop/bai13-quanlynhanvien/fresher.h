#ifndef FRESHER_H
#define FRESHER_H

#include "employee.h"

class Fresher : public Employee
{
    Day graDate;
    char rank;
    string education;
public: 
    Fresher() {}

    Fresher(string id, string fullName, Day birthday, string phone, string email, vector<Certificate> cerList, Day graDate, char rank, string education) : Employee(id, fullName, birthday, phone, email, cerList)
    {
        this->graDate = graDate;
        this->rank = rank;
        this->education = education; 
    }

    ~Fresher(){}

    void setGraDate(Day graDate) {this->graDate = graDate;}
    void setRank (char rank) {this->rank = rank;}
    void setEducation (string education) {this->education = education;}

    Day getGraDate() {return graDate;}
    char getRank () {return rank;}
    string getEducation () {return education;}

    void showInfo()
    {
        cout<<"Information Fresher\n";
        Employee::showInfo();
        cout << "Graduation date: " ;
        graDate.showDay();
        cout << "Graduation rank: " << rank << endl;
        cout << "Education: " << education << endl;
    }
};

Fresher* creatFresher()
{
    string id;
    string fullName; 
    Day birthday;
    string phone;
    string email;
    vector<Certificate> cerList;
    Day graDate;
    char rank;
    string education;

    cout << "Enter id: ";
    getline(cin, id);
    creatFullName(fullName);
    creatDay(birthday);
    creatPhone(phone);
    creatEmail(email);
    creatCerList(cerList);
    creatDay(graDate);
    cout << "Enter rank: ";
    cin >> rank;
    cin.ignore();
    cout << "Enter education: ";
    getline(cin, education);
    return new Fresher(id, fullName, birthday, phone, email, cerList, graDate, rank, education);
}
#endif