#pragma once

#include<iostream>
using namespace std;

class Worker: public Cadres{
    private:
        int level;
    public:
        // Worker(string name, int age , bool gender, int level):
        //  Cadres(name, age, gender), level(level){}
        void set_level();
        int get_level () const;
        void Show_Information();
        void Input();


        ~Worker(){
            cout <<"Destructor Worker\n";
        }
};


