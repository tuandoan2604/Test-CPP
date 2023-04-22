#pragma once
#include <vector>
#include "Candidate.h"
using namespace std;

class Admissions{
    private:
        vector<Candidate*> List_Candidate;
    public:
        void Insert_candidate( );

        void Show_Information();
        void Search_by_ID();
        ~Admissions(){
            cout << "=>Destructor Admissions!!!\n";
            for(Candidate *Cdd : List_Candidate ){
                delete Cdd;
            }
            List_Candidate.clear();
        }
};