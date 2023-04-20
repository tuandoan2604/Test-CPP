#pragma once

#include "officer.h"
#include "engineer.h"
#include <vector>

class StaffManagement{

    private:
        vector <Officer *> listOfficer;
    public:
        void insert();
        void findName();
        void showList();

        ~StaffManagement(){
            cout<<"Destructor staff_management\n";
            for (Officer* officer : listOfficer){
                delete officer;
            }

            listOfficer.clear();
        }
};
