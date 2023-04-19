#pragma once
#include "Candidate.h"

class Candidate_Block_C: public Candidate{
    private:
        int Literature ;
        int History ;
        int Geography ;
    public:

        int GetLiterature() const ;

        void SetLiterature() ;

        int GetHistory() const ;

        void SetHistory() ;

        int GetGeography() const ;

        void SetGeography() ;
        void Input();

        void Show_Information();
        ~ Candidate_Block_C(){
            cout << "=> Destructor Candidate_Block_C!!!\n";
        }
};