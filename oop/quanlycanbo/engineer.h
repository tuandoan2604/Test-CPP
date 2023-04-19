#ifndef ENGINEER
#define ENGINEER

#include "cadres.h"

using namespace std;

class Engineer : public Cadres 
{
private:
    string major;
public:
    Engineer(string name, int age, Gender gender, string address, string major) : Cadres(name, age, gender, address)
    {
        this->major = major;
    }

    Engineer()
    {
        cout << "Enter majors: ";
        getline(cin, major);
    }

    void displayInfo ()
    {
        cout << "Engineer: " << endl;
        Cadres::displayInfo();
        cout << "Major: " << major << endl;
    }

    ~Engineer(){}
};

#endif