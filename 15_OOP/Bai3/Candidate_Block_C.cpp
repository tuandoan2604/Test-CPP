#include "Candidate_Block_C.h"

int Candidate_Block_C::GetLiterature() const {
        return Literature;
}

void Candidate_Block_C::SetLiterature() {
        cout<< "Enter Literature:";
        Cin_int(Literature);
}

int Candidate_Block_C::GetHistory() const {
        return History;
}

void Candidate_Block_C::SetHistory() {
        cout<< "Enter History:";
        Cin_int(History);
}

int Candidate_Block_C::GetGeography() const {
        return Geography;
}

void Candidate_Block_C::SetGeography() {
        Cin_int(Geography);
}
void Candidate_Block_C::Input(){
    Candidate::Input();
    SetLiterature();
    SetHistory();
    SetGeography();
}

void Candidate_Block_C::Show_Information(){
    Candidate::Show_Information();
    cout<< "Literature: "<<GetLiterature() <<"    History: " <<GetHistory() <<"     Geography: "<< GetGeography()<<endl;
}