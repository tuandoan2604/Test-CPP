#pragma once
#include "candidate.h"

class Candidate_Block_B: public Candidate{
    private:
        int math; 
        int chemistry ;
        int biology ;

    public:

        int getMath() const ;

        void setMath();


        int getChemistry() const ;

        void setChemistry();

        int getBiology() const ;

        void setBiology() ;
        void input();
        void showInformation();
        ~ Candidate_Block_B(){
            cout << "=> Destructor Candidate_Block_B!!!\n";
        }
};

int Candidate_Block_B::getMath() const {
        return math;
}

void Candidate_Block_B::setMath() {
        cout << "Enter Math: ";
        Cin_int(math);
}

int Candidate_Block_B::getChemistry() const {
        return chemistry;
}

void Candidate_Block_B::setChemistry() {
        cout<< "Enter Physics:";
        Cin_int(chemistry);
}

int Candidate_Block_B::getBiology() const {
        return biology;
}

void Candidate_Block_B::setBiology() {
        cout<<"Enter Chemistry:";
        Cin_int(biology);
}
void Candidate_Block_B::showInformation(){
    Candidate::showInformation();
    cout<<"Math: " <<getMath() << " Chemistry: " <<getChemistry()<<"  Biology: "<<getBiology() <<endl;
}
void Candidate_Block_B::input(){
    Candidate::input();
    setMath();
    setChemistry();
    setBiology();
}