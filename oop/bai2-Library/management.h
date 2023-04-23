#ifndef MANAGEMENT
#define MANAGEMENT

#include "book.h"
#include "newspaper.h"
#include "magazine.h"

#include <unordered_map>

using namespace std;

class Management
{
    unordered_map<int, Document*> arrayDocument;
public:
    void displayLibrary()
    {
        if(arrayDocument.size() == 0)
        {
            cout <<"danh sach rong" << endl;
        } 
        else
        {
            for(const auto& it : arrayDocument)
            {
                it.second->displayInfo();
            }
        }
    }

    void addDocument()
    {
        Document *dc;
        while(1)
        {
            int select = 0;
            cout << "Enter select \n 1 - Book \n 2 - Newspaper\n 3 - Magazine\n";
            cin >> select;
            cin.ignore();
            if(select == 1 || select == 2 || select == 3)
            {
                switch (select)
                {
                case 1:
                    cout << "Add new Book";
                    dc = new Book;
                    break;
                
                case 2:
                    cout << "Add new Newspaper";
                    dc = new Newspaper;
                    break;
                
                case 3:
                    cout << "Add new Magazine";
                    dc = new Magazine;
                    break;
                }

                arrayDocument.insert(make_pair(dc->getID(), dc));
                break;
            }
            cout << "Incorrect enter";
        }
    }

    void deleteDocument()
    {
        int id;
        cout << "Enter id want to delete: ";
        cin >> id;
        cin.ignore(); 
        auto it = arrayDocument.find(id);
        if(it != arrayDocument.end())
        {
            Document* dc = it->second;
            delete(dc);
            arrayDocument.erase(id);
        }
        else
        {
            cout << "khong tim thay" << endl;
        }
    }

    void Program()
    {
        int a = 0;
        while(1)
        {
            cout << "Enter select funtion\n1 - Add new document\n2 - Delete document\n3 - Display Document\n4 - Exit program\n";
            cin >> a;
            cin.ignore();
            
            if (a == 1) { addDocument();}
            if (a == 2) {deleteDocument();}
            if (a == 3) {displayLibrary();}
            if (a == 4) 
            {
                for(const auto& it : arrayDocument)
                {
                    delete(it.second);
                }
                arrayDocument.clear(); 
                break;
            }

            cout << "Re-Enter";
        }
    }

    ~Management()
    {
        for(const auto& it : arrayDocument)
        {
            delete(it.second);
        }
        arrayDocument.clear();
    }

};

#endif