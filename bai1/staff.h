#pragma once

#include "officer.h"

#include<iostream>
using namespace std;

class Staff: public Officer{
    private: 
        string job;
    public:
        // Staff(string name, int age , bool gender, string job):
        //  Cadres(name, age, gender), job(job){}
        void set_job();

        string get_job() const;

        void show_information();

        void Input();
        
        ~Staff(){
            cout << "Destructor Staff\n";
        }
};