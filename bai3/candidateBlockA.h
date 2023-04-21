#pragma once
#include "candidate.h"

class Candidate_Block_A: public Candidate{
    private:
        int math; 
        int physics ;
        int chemistry ;

    public:

        int getMath() const ;

        void setMath() ;

        int getPhysics() const ;

        void setPhysics() ;
        int getChemistry() const ;

        void setChemistry() ;
        void showInformation();
        void input();
        ~Candidate_Block_A(){
            cout<< "=>Destructor Candidate_Block_A!!!\n";
        }
};

int Candidate_Block_A::getMath() const {
        return math;
}

void Candidate_Block_A::setMath() {
        cout << "Enter Math: ";
        Cin_int(math);
}

int Candidate_Block_A::getPhysics() const {
        return physics;
}

void Candidate_Block_A::setPhysics() {
        cout<< "Enter Physics:";
        Cin_int(physics);
}

int Candidate_Block_A::getChemistry() const {
        return chemistry;
}

void Candidate_Block_A::setChemistry() {
        cout<<"Enter Chemistry:";
        Cin_int(chemistry);
}
void Candidate_Block_A::showInformation(){
    Candidate::showInformation();
    cout<<"Math: " <<getMath() << " Physics: " <<getPhysics()<<"  Chemistry: "<<GetChemistry() <<endl;
}
void Candidate_Block_A::input(){
    Candidate::input();
    setMath();
    setPhysics();
    setChemistry();
}