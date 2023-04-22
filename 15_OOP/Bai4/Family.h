#pragma once
#include "Person.h"
#include<vector>
using namespace std;

class Family{
    private:
        int Number_Of_Member; 
        int House_Number;
        static int Next_House_Number;
        vector <Person * > List_Member;
    
    public:
        Family(){House_Number = Next_House_Number++;}
            
        void Insert_Member();
        void Delele_Member();
        int GetNumber_Of_Member() const ;

        void SetNumber_Of_Member() ;

        int GetHouse_Number() const ;

        void Show_Information();

        void Input();

        ~Family(){
            cout << "=>Destructor Family!!!\n";
            for( Person * ps : List_Member){
                delete ps;
            }
            List_Member.clear();
        }
};

int Family::Next_House_Number = 1;