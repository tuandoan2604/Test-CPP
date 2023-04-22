#include "Employee.h"
#include "Intern.h"
#include "Fresher.h"
#include "Experience.h"

#include <vector>

#define EXPERIENCE 0
#define FRESHER 1
#define INTERN 2

using namespace std;
class Manage_Employee{
    private:
        vector <Employee*> List_Employee;
    public:
        void Insert_Employee(){
            int type;
            cout << "Choose type employee (0. EXPERIENCE / 1. FRESHER / 2. INTERN): ";
            cin >> type;

            Employee * employee;
            if (type == EXPERIENCE) {
                employee = new Experience();
            } else if (type == FRESHER) {
                employee = new Fresher();
            } else if (type == INTERN) {
                employee = new Intern();
            } else {
                std::cout << "Error! Invalid selection." << endl;
                return;
            }
            // Nhập thông tin sau khi chọn loại class
            employee->Input();
            List_Employee.push_back(employee);
        }
        void Edit_Employee(){
            int ID;
            cout << "Enter ID of emplyee:";
            cin>>ID;
            for( Employee * employee : List_Employee ){
                if(employee->GetID() == ID){
                    employee->Input();
                }
            }
        }
        void Delete_Employee(){
            int ID;
            cout << "Enter ID of emplyee:";
            cin>>ID;
            for(int i =0; i< List_Employee.size() ; i++){
                if(List_Employee[i]->GetID() == ID){
                    delete List_Employee[i];
                    List_Employee.erase(List_Employee.begin() + i);
                }
            }    
        }
        void Search_By_Type(){
            int type;
            cout << "Choose type employee (0. EXPERIENCE / 1. FRESHER / 2. INTERN): ";
            cin >> type;
            for( Employee * employee  : List_Employee){
                if(employee->GetEmployee_type() == type){
                    employee->showMe();
                }
            }
        }
        ~Manage_Employee(){
            cout <<"=>Destructor Manage_Employee !!!\n";
            for(Employee * employee  : List_Employee){
                delete employee;
            }
            List_Employee.clear();
        }
};