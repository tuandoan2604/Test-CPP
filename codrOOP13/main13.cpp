#include "Certificate.h"
#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#define ADD 1
#define EDIT 2
#define DELETE 3
#define SHOW 4
#define FIND_EXPERIENCE 5
#define FIND_FRESHER 6
#define FIND_INTERN 7
vector <Employee*> listEmployee;
    Employee* employee;
    int choose;
    bool check=true;
    
    
    int ID; string fullName; string birthDay;string phone; string email; int employeeType;
            int expInYear; string proSkill;
            string graduationDate; int graduationRank; string education;
            string majors; int semester; string universityName;
void addInformation(){
            
           int count;
           do
           {
            cout<< "Enter full name : "<<endl;
            cin.ignore();
            getline(cin,fullName);
            check=fullNameException(fullName);
            if(check){
                    cout<<"Wrong! Re-enter."<<endl;
                }
           } while (check);
           
            do
            {
                cout<<"Enter birthday : "<<endl;
                getline(cin,birthDay);
                check=dateException(birthDay);
                if(check){
                    cout<<"Wrong! Re-enter."<<endl;
                }
            } while (check);
            
            do
            {
                cout<<"Enter the phone :"<<endl;
                getline(cin,phone);
                check=phoneException(phone);
                if(check){
                    cout<<"Wrong! Re-enter."<<endl;
                }
            } while (check);
            
            do
            {
                cout<<"Enter the email :"<<endl;
                
                
                getline(cin, email);
                check =emailException(email);
                
                if(check){
                    cout<<"Wrong! Re-enter."<<endl;
                }
            } while (check);
            
            
            do
            {
                cout<<"Enter 0 if employee is experience"<<endl;
                cout<<"Enter 1 if employee is fresher"<<endl;
                cout<<"Enter 2 if employee is intern"<<endl;
                cout<<"Enter the choose :"<<endl;
                cin>>choose;
                switch (choose)
                {
                case EXPERIENCE:
                    cout<<"Enter year of expertience: "<<endl;
                    cin>>expInYear;
                    cout<<"Enter Skill : "<<endl;
                    cin.ignore();
                    getline(cin,proSkill);
                    employee=new Experience(ID, fullName,birthDay, phone, email, EXPERIENCE, expInYear, proSkill );
                    listEmployee.push_back(employee);
                    cout<<"Enter the number of certificate :"<<endl;
                    cin>>count;
                    for(int i=0;i<count;i++){
                    employee->addCertificate();}
                    
                    break;
                case FRESHER:
                    cout<<"Enter date of graduationDate : "<<endl;
                    getline(cin,graduationDate);
                    cout<<"Enter graduation rank : "<<endl;
                    cin>>graduationRank;
                    cout<<"Enter education :"<<endl;
                    cin.ignore();
                    getline(cin,education);
                    employee=new Fresher(ID, fullName,birthDay, phone, email, FRESHER, graduationDate, graduationRank, education );
                    listEmployee.push_back(employee);
                    cout<<"Enter the number of certificate :"<<endl;
                    cin>>count;
                    for(int i=0;i<count;i++){
                    employee->addCertificate();}
                    break;
                case INTERN:
                    cout<<"Enter majors: "<<endl;
                    getline(cin,majors);
                    cout<<"Enter semester : "<<endl;
                    cin>>semester;
                    cout<<"Enter name of universityname :"<<endl;
                    cin.ignore();
                    getline(cin,universityName);
                    employee=new Intern(ID, fullName,birthDay, phone, email, INTERN, majors, semester, universityName );
                    listEmployee.push_back(employee);
                    cout<<"Enter the number of certificate :"<<endl;
                    cin>>count;
                    for(int i=0;i<count;i++){
                    employee->addCertificate();}
                    break;
                        
                default:
                    cout<<"Re-enter!"<<endl;
                    check=false;
                    break;
                }
            } while (!check);
}
void deleteInformation(){
        
            check =true;
            for(int i=0; i<listEmployee.size();i++)
            {
                if(listEmployee[i]->getID()==ID){
                    
                    delete(listEmployee[i]);
                    listEmployee.erase(listEmployee.begin()+i);
                    cout<< "Deleted!"<<endl;
                    check =false;
                    break;
                }
            }
            if(check){
                cout<< "Not-found this ID "<<endl;
            }
}
void findExperience(){
        
     for(int i=0; i<listEmployee.size();i++)
            {
                if(listEmployee[i]->getEmployeeType()==EXPERIENCE){
                    listEmployee[i]->showMe();
                    cout<<"=========="<<endl;   
                }
            }
}
void findFresher(){
    for(int i=0; i<listEmployee.size();i++)
            {
                if(listEmployee[i]->getEmployeeType()==FRESHER){
                    listEmployee[i]->showMe();
                    cout<<"=========="<<endl;   
                }
            }
}
void findIntern(){
    for(int i=0; i<listEmployee.size();i++)
            {
                if(listEmployee[i]->getEmployeeType()==INTERN){
                    listEmployee[i]->showMe();
                    cout<<"=========="<<endl;   
                }
            }
}
int main(){
    
    while (true)
    {
        cout << "***********" << endl;
        cout << "Enter 1 to add employee " << endl;
        cout << "Enter 2 to edit the information " << endl;
        cout << "Enter 3 to delete employee " << endl;
        cout << "Enter 4 to show employee information :"<<endl;
        cout << "Enter 5 to find all experience :"<<endl;
        cout << "Enter 6 to find all fresher :"<<endl;
        cout << "Enter 7 to find all intern :"<<endl;
        cout << "Enter the choose :" << endl;
        cin >> choose;
        switch (choose)
        {
        case ADD:
            cout<<"Enter ID of employee :"<<endl;
            cin>> ID;
            addInformation();
            break;
        case EDIT:
            cout<<"Enter ID of employee :"<<endl;
            cin>> ID;
            deleteInformation();
            addInformation();
            
            break;
        case DELETE:
            cout<<"Enter ID of employee :"<<endl;
            cin>> ID;
            deleteInformation();
            break;
        case SHOW :
            cout<<"Enter ID of employee :"<<endl;
            cin>> ID;
            check =true;
            for(int i=0; i<listEmployee.size();i++)
            {
                if(listEmployee[i]->getID()==ID){
                    listEmployee[i]->showMe();
                    
                    check =false;
                    break;
                }
            }
            if(check){
                cout<< "Not-found this ID "<<endl;
            }
            break;
        case FIND_EXPERIENCE:
            findExperience();
            break;
        case FIND_FRESHER :
            findFresher();
            break;
        case FIND_INTERN :
            findIntern();
            break;        
        default:
            cout<<"Re-enter!"<<endl;
        }
    }
    
    return 0;
}