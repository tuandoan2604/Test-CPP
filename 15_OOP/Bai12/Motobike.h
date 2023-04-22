#pragma once
#include "Verhical.h"
class Motobike:public Verhical 
{
private:
    int Engine_capacity;

public:
    int GetEngine_capacity() const {
        return Engine_capacity;
    }

    void SetEngine_capacity() {
        cout << "Enter Engine_capacity:";
        cin >>Engine_capacity;
    }
    void Input(){
        Verhical::Input();
        SetEngine_capacity();
    }
    void Show_Information(){
        Verhical::Show_Information();
        cout << "Engine_capacity: "<<GetEngine_capacity()<<endl;
    }
    ~Motobike(){
        cout <<"=>Destructer Motobike !!! \n";
    }
};



