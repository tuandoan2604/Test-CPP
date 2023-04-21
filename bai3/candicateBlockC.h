#pragma once
#include "candidate.h"

class Candidate_Block_C: public Candidate{
    private:
        int literature ;
        int history ;
        int geography ;
    public:

        int getLiterature() const ;

        void setLiterature() ;

        int getHistory() const ;

        void setHistory() ;

        int getGeography() const ;

        void setGeography() ;
        void input();

        void showInformation();
        ~ Candidate_Block_C(){
            cout << "=> Destructor Candidate_Block_C!!!\n";
        }
};


int Candidate_Block_C::getLiterature() const {
        return literature;
}

void Candidate_Block_C::setLiterature() {
        cout<< "Enter Literature:";
        Cin_int(literature);
}

int Candidate_Block_C::getHistory() const {
        return history;
}

void Candidate_Block_C::setHistory() {
        cout<< "Enter History:";
        Cin_int(history);
}

int Candidate_Block_C::getGeography() const {
        return geography;
}

void Candidate_Block_C::setGeography() {
        Cin_int(geography);
}
void Candidate_Block_C::input(){
    Candidate::input();
    setLiterature();
    setHistory();
    setGeography();
}

void Candidate_Block_C::showInformation(){
    Candidate::showInformation();
    cout<< "Literature: "<<getLiterature() <<"    History: " <<getHistory() <<"     Geography: "<< getGeography()<<endl;
}