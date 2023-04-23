#ifndef STAFF
#define STAFF

#include "cadres.h"

using namespace std;

class Staff : public Cadres 
{
private:
    string job;
public:
    Staff(string name, int age, Gender gender, string address, string job) : Cadres(name, age, gender, address)
    {
        this->job = job;
    }

    Staff() 
    {
        cout << "Enter job: ";
        getline(cin, job);
    }
    void displayInfo ()
    {
        cout << "Staff: " << endl;
        Cadres::displayInfo();
        cout << "Job: " << job << endl;
    }

    ~Staff(){}
};

#endif