#include "Candidate_Block_A.h"

int Candidate_Block_A::GetMath() const {
        return Math;
}

void Candidate_Block_A::SetMath() {
        cout << "Enter Math: ";
        Cin_int(Math);
}

int Candidate_Block_A::GetPhysics() const {
        return Physics;
}

void Candidate_Block_A::SetPhysics() {
        cout<< "Enter Physics:";
        Cin_int(Physics);
}

int Candidate_Block_A::GetChemistry() const {
        return Chemistry;
}

void Candidate_Block_A::SetChemistry() {
        cout<<"Enter Chemistry:";
        Cin_int(Chemistry);
}
void Candidate_Block_A::Show_Information(){
    Candidate::Show_Information();
    cout<<"Math: " <<GetMath() << " Physics: " <<GetPhysics()<<"  Chemistry: "<<GetChemistry() <<endl;
}
void Candidate_Block_A::Input(){
    Candidate::Input();
    SetMath();
    SetPhysics();
    SetChemistry();
}