#pragma once

#include<iostream>
using namespace std;

class Worker: public Officer{
    private:
        int level;
    public:
        // Worker(string name, int age , bool gender, int level):
        //  Cadres(name, age, gender), level(level){}
        void set_level();
        int get_level () const;
        void show_information();
        void Input();


        ~Worker(){
            cout <<"Destructor Worker\n";
        }
};