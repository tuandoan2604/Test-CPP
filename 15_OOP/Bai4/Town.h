#pragma once
#include "Family.h"

class Town{
    private:
        static int  Number_Of_Family ;
        vector <Family*> List_Family;

    public:

        int GetNumber_Of_Family() const {
            return Number_Of_Family;
        }

        void Inset_Family(){
            Number_Of_Family++;

            Family *family = new Family();
            family->Insert_Member();
            List_Family.push_back(family);
        }

        void Delete_Family(){
            Number_Of_Family--;

            int House_Number;
            cout <<"Enter House Number: ";
            Cin_int(House_Number);
            for( int i = 0; i < List_Family.size(); i++ ){
                if( List_Family[i]->GetHouse_Number() == House_Number ){
                    delete List_Family[i];

                    List_Family.erase(List_Family.begin() + i);
                }
                
            }
        }

        void Show_Information(){
            cout << "======= Information of Town ========"<<endl;
            for( Family * family : List_Family ){
                family->Show_Information();
            }
        }
        ~Town(){
            cout << "=>Destructor Town!!!\n";
            for( Family * family: List_Family ){
                delete family;
            }
            List_Family.clear();
        }
};

int  Town::Number_Of_Family  = 0;