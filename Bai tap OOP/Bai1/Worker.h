#include "Employee.h"

#ifndef WORKER_H
#define WORKER_H

class Worker: public Employee
{
private:
    /* data */
    int degree;
public:
    Worker(/* args */);
    ~Worker();

    void display()override;
};

Worker::Worker(/* args */)
{
    cout<< "Enter the degree: 1 to 10 \n";
    int num;

    do{
        cin>> num;
        if (num<=1 && num>=10)
        {
            cout<< "Wrong number of degree. Retype: ";
        }
    }
    while(num<=1 && num>=10);

    degree = num;
}

Worker::~Worker()
{
    cout<< "Destructor of Worker \n";
}

void Worker::display()
{
    cout<<"[Worker] Name: "<< name << ", Gender: "<< sex<< ", Age: "<< age<< ", Address "<< address<< ", Degree "<< degree<< endl;
}
#endif