#include "ManagementDocument.h"
#pragma once
#include <iostream>
#include <string>
using namespace std;
#define BOOK 1
#define MEGAZINE 2
#define NEWS_PAPER 3

ManagementDocument::ManagementDocument()
{
    
}

void ManagementDocument::addDocument()
{
    Document *document;
    string documentId;
    string publisher;
    int numRelease;
    string authorName;
    int numPage;
    int numOfRelease;
    int monthRelease;
    int dayRelease;
    int choose;
    bool check = true;
    // kiem tra trung lap
    do
    {

        cout << "Nhap ma tai lieu " << endl;
        cin >> documentId;

        for (int i = 0; i < listDocument.size(); i++)
        {
            if (documentId == listDocument[i]->getDocumnetId())
            {
                cout << "Ma tai lieu da ton tai, moi nhap lai!" << endl;
                check = false;
                break;
            }
        }
    } while (!check);
    cout << "Nhap ten NXB: " << endl;
    cin >> publisher;
    cout << "Nhap so ban phat hanh: " << endl;
    cin >> numRelease;
    check = true;
    while (check)

    {

        cout << "1.  Neu tai lieu la sach \n";
        cout << "2.  Neu tai lieu la tap chi \n";
        cout << "3.  Neu tai lieu la bao \n";
        cout << "Nhap lua chon :" << endl;

        cin >> choose;

        switch (choose)
        {
        case 1:

            cout << "Nhap ten tac gia : ";
            cin >> authorName;

            cout << "Nhap so trang : ";
            cin >> numPage;
            document = new Book(documentId, publisher, numRelease, authorName, numPage);
            listDocument.push_back(document);
            check = false;
            break;
        case 2:

            cout << "Nhap thang phat hanh: " << endl;
            cin >> monthRelease;
            cout << "Nhap so phat hanh: " << endl;
            cin >> numOfRelease;

            document = new Megazine(documentId, publisher, numRelease, numOfRelease, monthRelease);
            listDocument.push_back(document);
            check = false;
            break;
        case 3:

            cout << "Nhap ngay phat hanh" << endl;
            cin >> dayRelease;
            document = new NewsPaper(documentId, publisher, numRelease, dayRelease);
            listDocument.push_back(document);
            check = false;
            break;

        default:
            cout << "Nhap sai, moi nhap lai! \n";

            break;
        }
    }
}

void ManagementDocument::deleteDocument()
{

    string documentId;
    cout << "Nhap ma tai lieu :" << endl;
    cin >> documentId;
    bool check = true;
    for (int i = 0; i < listDocument.size(); i++)
    {
        if (listDocument[i]->getDocumnetId() == documentId)
        {
            delete(listDocument[i]);
            listDocument.erase(listDocument.begin() + i);
            cout << "Da xoa tai lieu" << endl;

            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "Khong tim thay ma tai lieu!" << endl;
    }
}

void ManagementDocument::showInformation()
{

    string documentId;
    
    cout << "Nhap ma tai lieu :" << endl;
    cin >> documentId;
    bool check = true;
    for (int i = 0; i < listDocument.size(); i++)
    {
        if (listDocument[i]->getDocumnetId() == documentId)
        {
            cout << "Thong tin tai lieu: " << endl;
            listDocument[i]->display();

            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "Khong tim thay ma tai lieu!" << endl;
    }
}

void ManagementDocument::findByType()
{
    bool check = true;
    int choose;
    while (check)

    {

        cout << "Tim tai lieu theo: " << endl;
        cout << "1.  Neu tai lieu la sach \n";
        cout << "2.  Neu tai lieu la tap chi \n";
        cout << "3.  Neu tai lieu la bao \n";
        cout << "Nhap lua chon :" << endl;

        cin >> choose;

        switch (choose)
        {
        case BOOK:

            for (int i = 0; i < listDocument.size(); i++)
            {
                if (listDocument[i]->type() == 1)
                {
                    listDocument[i]->display();
                    cout << "---------------" << endl;
                }
            }
            check = false;
            break;
        case MEGAZINE:

            for (int i = 0; i < listDocument.size(); i++)
            {
                if (listDocument[i]->type() == 2)
                {
                    listDocument[i]->display();
                    cout << "---------------" << endl;
                }
            }
            check = false;
            break;
        case NEWS_PAPER:

            for (int i = 0; i < listDocument.size(); i++)
            {
                if (listDocument[i]->type() == 3)
                {
                    listDocument[i]->display();
                    cout << "---------------" << endl;
                }
            }
            check = false;
            break;

        default:
            cout << "Nhap sai, moi nhap lai! \n";

            break;
        }
    }
}

