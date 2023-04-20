#pragma once
#include "Staff.h"
using namespace std;
Staff :: Staff(){}
Staff :: Staff(string fullName, int age, string gender, string address, string job): Cadres(fullName, age,gender,  address){
    
    this->job=job;
}
string Staff :: getJob(){
    return job;
}
void Staff :: setJob(string job){
    this->job=job;
}
void Staff :: display(){
    Cadres :: display();
    cout<<"Cong viec :"<< job<<endl;

}
Staff :: ~Staff(){}