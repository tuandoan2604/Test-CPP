#ifndef MANAGEMENT
#define MANAGEMENT

#include "cadres.h"
#include "worker.h"
#include "engineer.h"
#include "staff.h"

using namespace std;

class Management
{
    vector<Cadres*> arrayCadres;
public:
    void addCadres()
    {
        while (1)
        {
            int a = 0;
            cout << "What do you want to add? " << endl;
            cout << "1 - Worker " << endl;
            cout << "2 - Engineer " << endl;
            cout << "3 - Staff" << endl; 
            cin >> a;
            cin.ignore();
            Cadres* cb;
            if( a == 1 || a == 2 || a == 3)
            {
                switch (a)
                {
                    case 1:
                        //CongNhan cn;
                        cb = new Worker; 
                        break;
        
                    case 2:
                        //Kysu ks;
                        cb = new Engineer; 
                        break;

                    case 3:
                        //NhanVien nv;
                        cb = new Staff; 
                        break;    
                }
                arrayCadres.push_back(cb);
                break;
            } else
            {
                cout<<"nhap sai, moi nhap lai: ";
            }
        }
    }

    void searchCadress()
    {
        string name;
        cout << "Enter the name want to find: ";
        cin >> name;
        cin.ignore();
        for(Cadres* a : arrayCadres)
        {
            if(a->getName() == name)
            {
                a->displayInfo();
            }
            else{cout << "not found" << endl;}
        }
    }

    void displayListCadress()
    {
        for (Cadres* a : arrayCadres)
        {
            a->displayInfo();
            cout << endl;
        }
        
    }

    void exitProgram ()
    {
        int pro = 0;
        while (1)
        {
            cout << "Select funtion: " << endl;
            cout << "1 - add cadres " << endl;
            cout << "2 - Display cadres " << endl;
            cout << "3 - Search cadres " << endl; 
            cout << "4 - Exit program " << endl; 
            cin >> pro;
            cin.ignore();
            switch (pro)
            {
            case 1:
                addCadres();
                break;
            
            case 2:
                displayListCadress();
                break;
            case 3: 
                searchCadress();
                break;
            }

            if (pro == 4)
            {
                for (Cadres* cb : arrayCadres)
                {
                    delete(cb);
                }
                arrayCadres.clear();
                break;
            }
        }
    }

    ~Management()
    {
        for (Cadres* cd : arrayCadres)
        {
            delete cd;
        }
        arrayCadres.clear();
    }
};

#endif