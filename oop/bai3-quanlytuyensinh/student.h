#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum BLOCK{A, B, C};

class Student
{
private:
    int id;
    string name;
    string address;
    int priority;
    BLOCK block;
public:
    Student()
    {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your address: ";
        getline(cin, address);
        cout << "Enter your priority: ";
        cin >> priority;
        cin.ignore();
        int a = 0;
        while (a>2 || a < 0)
        {
            cout << "Enter your block(0 - A,1 - B, 2 - C: ";
            cin >> a;
            cin.ignore();
            switch (a)
            {
                case A:
                    block = A;
                    break;
                case B:
                    block = B;
                    break;
                case C:
                    block = C;
                    break;
            }
        }
    }
   
    Student(int id, string name, string address, int priority, BLOCK block)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->priority = priority;
        this->block = block;
    }

    int getID()
    {
        return id;
    }

    void displayInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Priority: " << priority << endl;
        cout << "Block: ";
        switch (block)
        {
        case A:
            cout << "A - Toan, Ly, Hoa" << endl;
            break;
        case B:
            cout << "B - Toan, Hoa, Sinh" << endl;
            break;
        case C:
            cout << "C - Van, Su, Dia" << endl;
            break;
        }
    }

    ~Student(){};
};

#endif