#include "Book.h"

string Book::GetAuthor() const
{
    return Author;
}

void Book::SetAuthor()
{
    cout << "Enter Author: ";
    cin.ignore();
    getline(cin, Author);
}

int Book::GetNum_page() const
{
    return Num_page;
}

void Book::SetNum_page()
{
    cout << "Enter nuMDer of page: ";
    Cin_int(Num_page);
}

void Book::Input(){
    Document::Input();
    SetAuthor();
    SetNum_page();
}
void Book::Show_information()
{
    Document::Show_information();
    cout << "     Auther: " << GetAuthor() << "        NuMDer of page: " << GetNum_page() << endl;
}