#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <iostream>

using namespace std;

class Teacher
{
    string id;
    string name;
    string hometown;
    int age;
    double salary;
    double bonus;
    double penaty;
    double realSalary;

public:
    Teacher()
    {
        cout << "Enter Information of teacher\n";
        cout << "Enter id: "; getline(cin, id);
        cout << "Enter name: "; getline(cin, name);
        cout << "Enter age: "; cin >> age; cin.ignore();
        cout << "Enter hometown: "; getline(cin, hometown);
        cout << "Enter salary: "; cin >> salary;
        cout << "Enter bonus: "; cin >> bonus;
        cout << "Enter penaty: "; cin >> penaty;
        cout << "Enter real salary: "; cin >> realSalary; cin.ignore();
    }

    Teacher(string id, string name, string hometown, int age, double salary, double bonus, double penaty,double realSalary)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->hometown = hometown;
        this->salary = salary;
        this->bonus = bonus;
        this->penaty = penaty;
        this->realSalary = realSalary;
    }

    void setID(int id){ this->id = id;}
    void setAge(int age) { this->age = age;}
    void setName(string name) { this->name = name;}
    void setHometown(string hometown) {this->hometown = hometown;}
    void setSalary( double salary) { this->salary = salary;}
    void setBonus( double bonus) { this->bonus = bonus;}
    void setPenaty( double penaty) { this->penaty = penaty;}
    void setRealSalary( double realSalary) { this->realSalary = realSalary;}

    string getID() {return id;}
    string getName() {return name;}
    int getAge() {return age;}
    string getHometown() {return hometown;}
    double getSalary() {return salary;}
    double getBonus() {return bonus;}
    double getPenaty() {return penaty;}
    double getRealSalary() {return realSalary;}

    ~Teacher(){}

};


#endif