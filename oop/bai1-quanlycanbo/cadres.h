#ifndef CADRES
#define CADRES

using namespace std;

enum Gender { MALE, FEMALE, OTHER };

class Cadres
{
protected:
    /* data */
    string name;
    int age;
    Gender gender;
    string address;

public:
    string getName()
    {
        return name;
    }
    Cadres(string name, int age, Gender gender, string address)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
    }

    Cadres()
    {
        cout << "Enter name: " << endl;
        getline(cin,name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        while(1)
        {
            int a;
            cout << "Gender selection: " << endl;
            cout << "1 - MALE " << endl;
            cout << "2 - FEMALE" << endl;
            cout << "3 - OTHER" << endl;
            //cin.ignore();
            cin>>a;
            cin.ignore();
            if (a == 1 || a == 2 || a == 3)
            {
            // Fixed the switch statement to use 'a' instead of 'gender'
                switch (a)
                {
                case 1:
                    gender = MALE ; 
                    break;

                case 2:
                    gender = FEMALE; 
                    break;

                case 3:
                    gender = OTHER;
                    break;
                }
                break;
            }
            else
            {
                cout << "Incorrect, re-enter!" << endl;
            }
        }
        cout << "Enter address: " << endl;
        getline(cin,address);
    }

    virtual void displayInfo ()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: ";
        switch (gender)
        {
        case MALE:
            cout << "MALE" << endl; 
            break;
        
        case FEMALE:
            cout << "FEMALE" << endl; 
            break;

        default:
            cout << "OTHER" << endl;
            break;
        }
        cout << "Address: " << address << endl;
    }
    
    virtual ~Cadres(){}
};

#endif