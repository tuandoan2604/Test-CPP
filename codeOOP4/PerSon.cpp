#include "Person.h"

Person::Person()
{
}

Person::Person(string fullName, int age, string job, int idNumber)
{
    this->fullName=fullName;
    this->age=age;
    this->idNumber=idNumber;
    this->job=job;
}

void Person::setFullName(string fullName)
{
    this->fullName =fullName;
}

void Person::setAge(int age)
{
    this->age=age;
}

void Person::setJob(string job)
{
    this->job=job;
}

void Person::setIdNumber(int idNumber)
{
    this->idNumber=idNumber;
}

string Person::getFullName()
{
    return fullName;
}

int Person::getAge()
{
    return age;
}

string Person::getJob()
{
    return job;
}

int Person::getIdNumber()
{
    return idNumber;
}

void Person::display()
{
    cout<< "Ho va ten :"<< getFullName()<<endl;
    cout<< "Tuoi :"<< getAge()<<endl;
    cout<< "Nghe nghiep :"<<getJob()<<endl;
    cout<< "So chung minh nhan dan :"<<getIdNumber()<<endl;
    cout<<"================================================="<<endl;
}
