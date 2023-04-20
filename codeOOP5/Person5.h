#pragma once
#include <iostream>
using namespace std;
class Person5
{
private:
    string fullName5;
    int age5;
    int idNumber5;
    int costRoom;
    int numOfRentDay;
public:
    Person5();
    Person5(string fullName5, int age5, int idNumber5, int costRoom, int numOfRentDay);
    void setFullName5(string fullName);
    void setAge5(int age);
    void setIdNumber5(int idNumber);
    void setCostRoom(int costRoom);
    void setNumOfRentDay(int numOfRentDay );
    string getFullName5();
    int getAge5();
    int getIdNumber5();
    int getCostRoom();
    int getNumOfRentDay();

};


