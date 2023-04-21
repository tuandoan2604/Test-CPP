#include "officer.h"

#pragma once

class Engineer: public Officer{
    private:
        string branch;
    public:
        void set_branch();
        string  get_branch() const;

        void show_information();
        void Input();

        ~Engineer(){
            cout<<"Destructor Engineer\n";
        }
};