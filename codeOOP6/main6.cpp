#include "Student6.h"
#include "Student6.cpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ADD 1
#define SHOW20 2
#define SHOW23_DN 3
int main()
{
    vector<Student6 *> listStudent;
    Student6 *st1;
    string fullName;
    int age;
    string homeTown;
    int count;
    int choose;
    while (true)
    {
        cout << "***********" << endl;
        cout << "Chon 1 de them hoc sinh moi" << endl;
        cout << "Chon 2 de hien thi hoc sinh 20 tuoi" << endl;
        cout << "Chon 3 cho biet so luong cac hoc sinh co tuoi  23 va que o DN" << endl;
        cout << "Nhap lua chon: " << endl;
        cin >> choose;
        switch (choose)
        {
        case ADD:
            cout << "Nhap ho va ten hoc sinh :" << endl;
            cin.ignore();
            getline(cin,fullName);
            cout << "Nhap tuoi :" << endl;
            cin >> age;
            cout << "Nhap que quan :" << endl;
            cin.ignore();
            getline(cin,homeTown);
            st1 = new Student6(fullName, age, homeTown);
            listStudent.push_back(st1);

            break;
        case SHOW20:
            count = 0;
            for (int i = 0; i < listStudent.size(); i++)
            {
                if (listStudent[i]->getAge() == 20)
                {
                    count++;
                }
            }
            cout << "Tong so hoc sinh 20 tuoi :" << count << endl;
            break;
        case SHOW23_DN:
            count = 0;
            for (int i = 0; i < listStudent.size(); i++)
            {
                if (listStudent[i]->getAge() == 23 && listStudent[i]->getHomeTown() == "DN")
                {
                    count++;
                }
            }
            cout<<"Tong so hoc sinh 23 tuoi que o DN :"<<count<<endl;
            break;
        default:
            break;
        }
    }

    return 0;
}