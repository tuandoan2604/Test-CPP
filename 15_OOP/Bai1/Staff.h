#pragma once

#include "Cadres.h"

#include<iostream>
using namespace std;

class Staff: public Cadres{
    private: 
        string job;
    public:
        // Staff(string name, int age , bool gender, string job):
        //  Cadres(name, age, gender), job(job){}
        void set_job();

        string get_job() const;

        void Show_Information();

        void Input();
        
        ~Staff(){
            cout << "Destructor Staff\n";
        }
};

