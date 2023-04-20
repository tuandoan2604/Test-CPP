#ifndef STREET_H
#define STREET_H

#include "Family.h"

class Street
{
private:
    /* data */
    vector<Family*> resident;
    int num_family;
public:
    Street(/* args */);
    ~Street();

    bool checkID(int e_ID);

    void display_street();

    void delete_street();
};

Street::Street(/* args */)
{
    cout<< "Enter the number of family in the street: \n";
    cin>> num_family;
    // res.resize(num_family);

    for(int i=0; i<num_family; i++)
    {
        Family* t_fam = new Family;
        // cout<< "-------------";
        cout<< "Enter the information of house number "<< i+1<< endl;

        cout<< "Enter the appartment number: \n";
        int hou_num;
        cin>>hou_num;
        t_fam->setAddress(hou_num);

        cout<< "Enter the number of people in this house: \n";
        int fam_num;
        cin>> fam_num;
        t_fam->setNumMember(fam_num);

        cout<< "Enter the information of each person in family \n";
        for(int j=0; j<fam_num; j++)
        {
            Person* t_per = new Person;
            // res->fam[j] = new Person;
            cout<< "The "<< j+1<< " person \n";

            cout<< "Enter the name: \n";
            string t_name;
            cin.ignore();
            getline(cin, t_name);
            t_per->setName(t_name);

            cout<< "Enter the age: \n";
            int t_age;
            cin>> t_age;
            t_per->setAge(t_age);

            cout<< "Enter the job: \n";
            string t_job;
            cin.ignore();
            getline(cin, t_job);
            t_per->setJob(t_job);

            int t_ID;
            bool check = false;
            do
            {
                cout<< "Enter the ID: \n";
                cin>> t_ID;
                check = checkID(t_ID);
                // cout<< "Check = "<< check<< endl;
                if (check)
                {
                    cout<< "Error: Duplicate ID. \n Re-enter the ID: \n";
                }
                
            } while (check);
            t_per->setID(t_ID);
            bool checkAdd = t_fam->addMem(t_per);
            if(!checkAdd)
            {
                j--;
            }
        }
        resident.push_back(t_fam);
    }
}

Street::~Street()
{
}

bool Street::checkID(int e_ID)
{
    // cout<< ">>>>>> In checkID function \n";
    // cout<< "Resident size = "<< resident.size()<< endl;
    for(int i=0; i<resident.size(); i++)
    {
        // cout<< "Family size = "<< res[i]->fam.size()<< endl;
        for (int j = 0; j < resident[i]->fam.size(); j++)
        {
            if(resident[i]->fam[j]->getID() == e_ID)
            {
                return true;
            }
        }
    }
    return false;
}

void Street:: display_street()
{
    cout<< "\n ---------------- DISPLAY STREET---------------------\n";
    cout<< "Number of family in the street: "<< num_family<< endl;
    for(int j=0; j<num_family; j++)
    {
        resident[j]->display_fam();
    }
}

void Street::delete_street()
{
    for(int i=0; i<resident.size(); i++)
    {
        Family* ptr = resident[i];
        delete(ptr);
        ptr = nullptr;
    }
}

#endif