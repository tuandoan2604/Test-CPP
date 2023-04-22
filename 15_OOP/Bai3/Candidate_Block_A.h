#pragma once
#include "Candidate.h"

class Candidate_Block_A: public Candidate{
    private:
        int Math; 
        int Physics ;
        int Chemistry ;

    public:

        int GetMath() const ;

        void SetMath() ;

        int GetPhysics() const ;

        void SetPhysics() ;
        int GetChemistry() const ;

        void SetChemistry() ;
        void Show_Information();
        void Input();
        ~Candidate_Block_A(){
            cout<< "=>Destructor Candidate_Block_A!!!\n";
        }
};