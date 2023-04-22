#include "Admissions.h"
#include "Candidate_Block_A.h"
#include "Candidate_Block_B.h"
#include "Candidate_Block_C.h"

void Admissions::Insert_candidate( ){
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
    Cdd->Input();
    List_Candidate.push_back(Cdd);
}

void Admissions::Show_Information(){
    cout<<"========= Information of Admissios =============="<<endl;
    for(Candidate* Cdd : List_Candidate){
        Cdd->Show_Information();
    }
}
void Admissions::Search_by_ID(){
    int ID;
    cout << "Enter ID to search: ";
    Cin_int(ID);
    cout <<"========= Information after searching =============="<<endl;
    for(Candidate * Cdd: List_Candidate){
        if( Cdd->GetID() == ID ){
            Cdd->Show_Information();
        }
    }
}