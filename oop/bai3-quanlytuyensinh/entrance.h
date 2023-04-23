#ifndef ENTRANCE_C
#define ENTRANCE_C

#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;

bool compareID(Student st1, Student st2)
{
    return st1.getID() < st2.getID();
}

class CollegeEntrance
{
private:
    vector<Student> arrayStudent;
public:
    void addStudent()
    {
        Student s;
        arrayStudent.push_back(s);
        sort(arrayStudent.begin(), arrayStudent.end(), compareID);
    }

    void searchStudent()
    {
        int idSearch = 0;
        cout << "Enter id, you want to search: ";
        cin >> idSearch;
        cin.ignore();
        auto it = lower_bound(arrayStudent.begin(), arrayStudent.end(), Student(idSearch,"a", "a", 0, A), compareID);
        if (it != arrayStudent.end() && it->getID() == idSearch)
        {
            it->displayInfo();
            cout << "tim thay" << endl;
        }
        else
        {
            cout << "Khong tim thay" << endl;
        }
    }

    void displayStudent()
    {
        for (Student s : arrayStudent)
        {
            s.displayInfo();
        }
    }

    void exitProgram()
    {
        arrayStudent.clear();
        cout << "clear";
        exit(0);
    }

    void program()
    {
        int select = 0;
        while(1)
        {
            cout << "Select funtion you want\n";
            cout << "1 - Add student\n";
            cout << "2 - Display student\n";
            cout << "3 - Search student\n";
            cout << "4 - Exit program" << endl;
            cin >> select;
            cin.ignore();
            switch (select)
            {
            case 1:
                addStudent();
                break;
            
            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                exitProgram();
                break;

            default:
                break;
            }
        }
    }

    ~CollegeEntrance() {arrayStudent.clear();}
};

#endif