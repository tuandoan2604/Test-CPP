#pragma once

#include "officer.h"
#include "engineer.h"
#include <vector>

class StaffMangement{

    private:
        vector <Officer *> listOfficer;
    public:
        void insert();
        void findName();
        void showList();

        ~StaffMangement(){
            cout<<"Destructor staff_management\n";
            for (Officer* officer : listOfficer){
                delete officer;
            }

            listOfficer.clear();
        }
};
