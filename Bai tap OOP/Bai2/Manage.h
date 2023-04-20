// #include "Document.h"
#include "Book.h"
#include "Magazine.h"
#include "Paper.h"
#include "vector"

#ifndef MANAGE_H
#define MANAGE_H

class Manage
{
    private:
        /* data */
        vector<Document*> doc;
    public:

        void addDoc();

        void deleteByID();

        void displayList();

        void findType();

        void exit_prog();
};



void Manage:: addDoc()
{
    int type;
    Document* a;
    cout<< "\n Enter the type of document you want to add: \n 1. BOOK    2. MAGAZINE     3. PAPER \n";
    cin>> type;

    switch (type)
    {
        case 1:
            a = new Book;
            break;
        case 2:
            a = new Magazine;
            break;
        case 3:
            a = new Paper;
            break;
        default:
            cout<< "Wrong type!!!";
            return;
    }
    doc.push_back(a); 
    cout<< "ADD DONE \n After add, the size of library: "<< doc.size()<< endl;
}

void Manage::deleteByID()
{
    int id;
    cout<< "\n Enter the document's ID you want to delete: \n";
    cin>> id;

    for(int i=0; i<doc.size(); i++)
    {
        if(doc[i]->getID() == id)
        {
            doc.erase(doc.begin()+i);
            cout<< "COMPLETE DELETE \n";
        }
    }
}

void Manage::displayList()
{
    // cout<< "The quantity of documents in library: "<< doc.size()<< endl;
    for(int i=0; i<doc.size(); i++)
    {
        doc[i]->display();
    }
}

void Manage:: findType()
{
    int find_type;
    cout<< "\n Enter the type of document you want to find: \n";
    cout<< "1. BOOK     2. MAGAZINE     3. NEWSPAPER \n";
    cin >>find_type;

    cout<< "\n Danh sach tai lieu dua tren phan loai: \n";
    for(int i=0; i<doc.size(); i++)
    {
        if(doc[i]->type() == find_type)
        {
            doc[i]->display();
        }
    }
}

void Manage::exit_prog()
{
    Document* ptr;
    for (int i = 0; i < doc.size(); i++)
    {
        ptr = doc[i];
        delete ptr;
        ptr = nullptr;
    }
    exit(0);
}


#endif