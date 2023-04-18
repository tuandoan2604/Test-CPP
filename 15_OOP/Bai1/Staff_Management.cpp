#include "staff_Management.h"

void Staff_management::Insert_Cadres(){

    int type;
    cout << "Chon loai can bo (1. Cong nhan / 2. Ky su / 3. Nhan vien): ";
    Cin_int(type);

    Cadres* cadre;
    if (type == 1) {
        cadre = new Worker();
    } else if (type == 2) {
        cadre = new Engineer();
    } else if (type == 3) {
        cadre = new Staff();
    } else {
        std::cout << "Loi! Lua chon khong hop le." << endl;
        return;
    }
    // Nhập thông tin sau khi chọn loại class
    cadre->Input();
    List_Cadres.push_back(cadre);}
    
void Staff_management::Find_Name(){
    cout<< "========== Tim theo ten ==============="<<endl;
    string name;
    cout << "Nhap ten can tim : ";
    cin.ignore();
    getline(cin, name);

    for (Cadres* cadre : List_Cadres){

        if(cadre->get_name() == name){
            cadre->Show_Information();
        }
    }
}
void Staff_management::Show_List(){
    cout << "==========Danh sach can bo ============ " <<endl; 
    for ( Cadres * cadre : List_Cadres){
        cadre->Show_Information();
    }
}  
