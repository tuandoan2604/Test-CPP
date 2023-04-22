#pragma once
#include "Candidate.h"

class Candidate_Block_B: public Candidate{
    private:
        int Math; 
        int Chemistry ;
        int Biology ;

    public:

        int GetMath() const ;

        void SetMath();


        int GetChemistry() const ;

        void SetChemistry();

        int GetBiology() const ;

        void SetBiology() ;
        void Input();
        void Show_Information();
        ~ Candidate_Block_B(){
            cout << "=> Destructor Candidate_Block_B!!!\n";
        }
};