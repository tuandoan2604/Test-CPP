#pragma once
#include <vector>
#include "candidate.h"
#include "candidateBlockA.h"
#include "candidateBlockB.h"
#include "candidateBlockC.h"

using namespace std;

class Admission{
    private: 
        vector<Candidate*> listCandidate;
    public:
        void insertCandidate();
        void showInformation();
        void searchById();
        ~Admission(){
            for(auto candidate:listCandidate){
                delete candidate;
            }
            listCandidate.clear();
        }
};

void Admissions::insertCandidate( ){
    int type;
    cout << "Choose type Block (1.Block A / 2. Block B / 3. Block C): ";
    Cin_int(type);

    Candidate * Cdd ;
    if (type == 1) {
        Cdd = new Candidate_Block_A();
    } else if (type == 2) {
        Cdd = new Candidate_Block_B();
    } else if (type == 3) {
        Cdd = new Candidate_Block_C();
    } else {
        std::cout << "Loi! Lua chon khong hop le." << endl;
        return;
    }
    // Nhập thông tin sau khi chọn loại class
    Cdd->input();
    listCandidate.push_back(Cdd);
}

void Admissions::Show_Information(){
    cout<<"========= Information of Admissios =============="<<endl;
    for(Candidate* Cdd : listCandidate){
        Cdd->showInformation();
    }
}
void Admissions::searchById(){
    int ID;
    cout << "Enter ID to search: ";
    Cin_int(ID);
    cout <<"========= Information after searching =============="<<endl;
    for(Candidate * Cdd: listCandidate){
        if( Cdd->getId() == id ){
            Cdd->showInformation();
        }
    }
}
