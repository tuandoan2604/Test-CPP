#pragma once
#include "Verhical.h"

class Car:public Verhical
{
private:
    int Number_of_seats;
    string Engine_type;

public:
    int GetNumber_of_seats() const {
        return Number_of_seats;
    }

    void SetNumber_of_seats() {
        cout << "Enter Number of seats: ";
        cin >> Number_of_seats;
    }

    string GetEngine_type() const {
        return Engine_type;
    }

    void SetEngine_type() {
        cout << "Enter Engine type: " ;
        cin.ignore();
        getline(cin, Engine_type);
    }
    void Show_Information(){
        Verhical::Show_Information();
        cout << "Number_of_seats: "<<GetNumber_of_seats()<<"     Engine_type:"<<GetEngine_type() <<endl;
    }
    void Input(){
        Verhical::Input();
        SetNumber_of_seats();
        SetEngine_type();
    }
    ~Car(){
        cout << "=>Destructor Car !!!\n";
    }
};






































