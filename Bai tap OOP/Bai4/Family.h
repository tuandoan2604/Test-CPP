#ifndef FAMILY_H
#define FAMILY_H

#include "Person.h"

class Family
{
private:
    /* data */
    // vector <Person*> family;
    int num_member;
    int address;
public:
    vector<Person*> fam;

    Family(/* args */);
    ~Family();

    void setNumMember(int num)
    {
        num_member = num;
        // fam.resize(num);
    }

    void setAddress(int address)
    {
        this->address = address;
        // cout<< "Set address completed \n";
    }

    int getNum(){return num_member;}

    void display_fam();

    bool addMem(Person* a);
};

Family::Family(/* args */)
{
    // cout<< "Constructor of family \n";
}

Family::~Family()
{
    cout<< "Destructor of Family \n";
}

void Family:: display_fam()
{
    cout<< "[FAMILY] Address: "<< address<< ", number of member: "<< num_member<< endl;
    for(int i=0; i<num_member; i++)
    {
        fam[i]->display_per();
    }
    cout<< endl;
}

bool Family::addMem(Person* a)
{
    // cout<< "Family size = "<< fam.size()<< endl;
    for(int i=0; i<fam.size(); i++)
    {
        // cout<< "Compare to person: ";
        // fam[i]->display_per();
        if(fam[i]->getID() == a->getID())
        {
            cout<< "Dupicate ID. Member is not added! \n";
            return false;
        }
    }
    fam.push_back(a);
    return true;
};

#endif