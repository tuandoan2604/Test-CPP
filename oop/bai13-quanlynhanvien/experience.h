#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "employee.h"

class Experience : public Employee
{
    int expInYear;
    string proSkill;
public:
    Experience() {}

    Experience(string id, string fullName, Day birthday, string phone, string email, vector<Certificate> cerList, int expInYear, string proSkill) : Employee(id, fullName, birthday, phone, email, cerList)
    {
        this->expInYear = expInYear;
        this->proSkill = proSkill;
    }

    void setExpInYear(int expInYear) {this->expInYear = expInYear;}
    void setProSkill(string proSkill) {this->proSkill = proSkill;}

    int getExpInYear() {return expInYear;}
    string getProSkill () {return proSkill;}

    ~Experience() {}

    void showInfo() {
        cout << "Information Exoerience\n";
        Employee::showInfo();
        cout << "Experience year: " << expInYear << endl;
        cout << "Pro Skill: " << proSkill << endl;
    }
};

Experience* creatExp()
{
    string id;
    string fullName; 
    Day birthday;
    string phone;
    string email;
    vector<Certificate> cerList;
    int expInYear;
    string proSkill;

    cout << "Enter id: ";
    getline(cin, id);
    creatFullName(fullName);
    creatDay(birthday);
    creatPhone(phone);
    creatEmail(email);
    creatCerList(cerList);
    cout << "Enter expInYear: ";
    cin >> expInYear;
    cin.ignore();
    cout << "Enter proskill: ";
    getline(cin, proSkill);
    return new Experience(id, fullName, birthday, phone, email, cerList, expInYear, proSkill);
}
#endif