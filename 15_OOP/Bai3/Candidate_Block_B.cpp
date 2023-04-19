#include "Candidate_Block_B.h"

int Candidate_Block_B::GetMath() const {
        return Math;
}

void Candidate_Block_B::SetMath() {
        cout << "Enter Math: ";
        Cin_int(Math);
}

int Candidate_Block_B::GetBiology() const {
        return Biology;
}

void Candidate_Block_B::SetBiology() {
        cout << "Enter Biology:";
        Cin_int(Biology);
}
void Candidate_Block_B::Input(){
    Candidate::Input();
    SetMath();
    SetChemistry();
    SetBiology();
}
void Candidate_Block_B::Show_Information(){
    Candidate::Show_Information();
    cout<<"Math: " <<GetMath() << " Chemistry: " <<GetChemistry()<<"    Biology: "<<GetBiology() <<endl;
}
int Candidate_Block_B::GetChemistry() const {
        return Chemistry;
}

void Candidate_Block_B::SetChemistry() {
        cout<<"Enter Chemistry:";
        Cin_int(Chemistry);
}

  