#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Officer{
    private:
        string name;
        int age;
        bool gender;
        string address;
    public:
        Officer(string name, int age, bool gender, string address){
            this->name = name;
            this->age = age;
            this->gender = gender;
            this->address = address;
        }
        
        string getName(){
            return this->name;
        }
        void setName(string name){
            this->name = name;
        }

        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age = age;
        }
        
        bool getGender(){
            return this->gender;
        }
        void setGender(){
            this->gender = gender;
        }

        string getAddress(){
            return this->address = address;
        }
        void setAddress(){
            this->address = address;
        }

    };

class Worker : public Officer{
    private:
        char level;
    public:
        Worker(char level, string name, int age, bool gender, string address){
            Officer(name, age, gender, address);
            this->level = level;
        }
        char getLevel(){
            return this->level;
        }
        void setLevel(char level){
            this->level = level;
        }
};

class Engineer : public Officer{
    private:
        string branch;
    public:
        Engineer(string branch, string name, int age, bool gender, string address){
            Officer(name, age, gender, address);
            this->branch = branch;
        }

        string getBranch(){
            return this->branch;
        }

        void setBranch(){
            this->branch = branch;
        }

        void display(){
            cout<<"Name: "<<this->getName();
            cout<<"Age: "<<this->getAge();
            cout<<"Gender: "<<this->getGender();
            cout<<"Address: "<<this->getAddress();
            cout<<"Branch: "<<this->getBranch();
        }
};

class Employee : public Officer{
    private:
        string task;
    public:
        Employee(string task, string name, int age, bool gender, string address){
            Officer(name, age, gender, address);
            this->task = task;
        }

        string getTask(){
            return this->task;
        }

        void setTask(){
            this->task = task;
        }
};

class ManageOfficer{
    private:
        std::vector<Officer> officers;
    public:
        ManageOfficer(std::vector<Officer> officers){
            this->officers = officers;
        }
}