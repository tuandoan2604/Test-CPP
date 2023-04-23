#include "manager.h"

using namespace std;

int main()
{
    Manager mn;
    int select;
    string name = "";
    int age = 0;
    string hometown = "";
    while (1)
    {
        cout << "Enter your select\n";
        cout << "1 - Add new student\n";
        cout << "2 - Display list of students on request \n";
        cout << "3 - Count the number of students as required\n";
        cout << "4 - Exit program\n";
        cin>>select;
        cin.ignore();

        switch (select)
        {
        case 1:
            mn.addStudent();
            break;
        
        case 2:
            cout <<"Enter information of student want to display";
            cout << "enter the name or press to skip: ";
            getline(cin, name);
            cout << "enter the age or press to skip: ";
            cin >> age;
            cin.ignore();
            cout << "enter the home town or press to skip: ";
            getline(cin, hometown);
            mn.searchStudent(name, age, hometown);
            break;

        case 3:
            cout <<"Enter information of student want to display\n";
            cout << "enter the name or press to skip: ";
            getline(cin, name);
            cout << "enter the age or press 0 to skip: ";
            cin >> age;
            cin.ignore();
            cout << "enter the home town or press to skip: ";
            getline(cin, hometown);
            cout << "Number student: " << mn.countStudent(name, age, hometown) << endl;
            break;
        
        case 4:
            exit(0);
            break;
        default:
            break;
        }

    }
    
}