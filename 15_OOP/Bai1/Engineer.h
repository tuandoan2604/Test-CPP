#include "Cadres.h"

#pragma once

class Engineer : public Cadres{
    private:
        string branch;
    public:
        // Engineer(string name, int age , bool gender, string branch):
        //  Cadres(name, age, gender), branch(branch){}
        void set_branch();
        string get_branch() const;

        void Show_Information();
        void Input();
        
        ~Engineer(){
            cout<<"Destructor Engineer\n";
        }
};
