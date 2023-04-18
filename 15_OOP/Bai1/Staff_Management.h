#pragma once

#include "Worker.h"
#include "Cadres.h"
#include "Engineer.h"
#include "Staff.h"

class Staff_management{
    private:
        //Khởi tạo vector chứa địa chỉ các cán bộ lưu trên stack, dữ liệu thì lưu trên heap 
        vector  <Cadres *> List_Cadres;
    public:
        void Insert_Cadres();
            
        void Find_Name();
        void Show_List(); 

        ~Staff_management(){
            cout << "Destructor staff_management\n";
            for ( Cadres * cadre : List_Cadres){
                // Xóa dữ liệu trên heap
                delete (cadre);
            }

            //Cả 2 cách đều hủy được;


            // for (int i = 0; i < List_Cadres.size() ; i ++){
            //     delete( List_Cadres[i] );
            // }
            // xóa danh sách
            List_Cadres.clear();
        } 
    
};