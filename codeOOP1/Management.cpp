#include "Management.h"
#include <iostream>
using namespace std;
#define NAM 1
#define NU 2
#define KHAC 3
#define CONG_NHAN
#define KY_SU
#define NHAN_VIEN
Management ::Management()
{
    
}
void Management ::addCadres()
{
    Cadres *cadres;
    int n;
    cout << " Nhap so luong can bo can them: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int choose;
        int chooseGender;
        bool check = false;
        string fullName;
        int age;
        string gender;
        string address;
        int level;
        string specialized;
        string job;
        cout << "Nhap ho va ten : " << endl;
        cin >> fullName;
        cin.ignore();
        cout << "Nhap tuoi : " << endl;
        cin >> age;

        do
        {
            cout << "Chon gioi tinh: " << endl;
            cout << "1. Nam" << endl;
            cout << "2. Nu" << endl;
            cout << "3. Khac" << endl;
            cout << "Nhap lua chon :" << endl;
            cin >> chooseGender;
            switch (chooseGender)
            {
            case NAM:
                gender = "Nam";
                check = false;
                break;
            case NU:
                gender = "Nu";
                check = false;
                break;
            case KHAC:
                gender = "Khac" ;
                check = false;
                break;
            
            default:
                cout << "Nhap lai lua chon"<<endl;
                break;
            }
        } while (check);
        cout<< "Nhap dia chi :"<< endl;
        cin>> address;
        cin.ignore();
        check = true;
        do
        {

            cout << "Nhap 1 neu can bo la cong nhan " << endl;
            cout << "Nhap 2 neu can bo la ky su " << endl;
            cout << "Nhap 3 neu can bo la nhan vien " << endl;
            cout << "Nhap so theo yeu cau : " << endl;
            cin >> choose;

            switch (choose)
            {
            case CONG_NHAN:
                cout<< "Nhap cap :"<<endl;
                cin >> level;
                cadres = new Worker(fullName,age, gender, address, level);

                listCadres.push_back(cadres);
                break;
            case KY_SU:
                cout<< "Nhap chuyen nganh :"<<endl;
                cin>> specialized;
                cadres = new Engineer(fullName,age,gender,address,specialized);
                listCadres.push_back(cadres);
                break;
            case NHAN_VIEN:
                cout<<"Nhap cong viec :"<<endl;
                cin>>job;
                cadres = new Staff(fullName, age,gender,address,job);
                listCadres.push_back(cadres);
                break;
            default:
                cout << "Nhap lai " << endl;
                check = true;
            }
        } while (check);
    }
}
void Management ::searchByName()
{
    bool check = true;
    string name;

    cout << "Nhap ten can bo can tim: ";
    cin >> name;

    for (int i = 0; i < listCadres.size(); i++)
    {

        if (listCadres[i]->getFullName() == name)
        {
            cout << "thong tin can bo co ten " << name << " la :" << endl;
            listCadres[i]->display();
            check = false;
        }
        if (check)
        {
            cout << "khong co can bo cung ten" << endl;
        }
    }
}

void Management ::showList()
{

    for (int i = 0; i < listCadres.size(); i++)
    {
        listCadres[i]->display();
        cout << "---------------" << endl;
    }
}
void Management::exitProgram()
{
    for (int i = 0; i < listCadres.size(); i++)
            {
                delete (listCadres[i]);
            }
            listCadres.clear();
            exit(0);
}
Management ::~Management()
{
}