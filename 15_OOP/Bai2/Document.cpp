#include "Document.h"

int Document::GetID_Document() const
{
    return ID_Document;
}

int Document::next_ID = 1;

string Document::Get_Publisher() const
{
    return Publisher;
}

void Document::Set_Publisher()
{
    cout << "Enter Publisher: ";
    cin.ignore();
    getline(cin, Publisher);
}

int Document::GetNum_Publisher() const
{
    return Num_Publisher;
}

void Document::SetNum_Publisher()
{
    cout << "Enter NuMDer of Publisher: ";
    Cin_int(Num_Publisher);
}


void Document::Show_information()
{
    cout << GetID_Document() << "       " << Get_Publisher() << "      " << GetNum_Publisher() << endl;
}

void Document::Input()
{
    cout<<"ID Document: "<<ID_Document<<endl;
    Set_Publisher();
    SetNum_Publisher();
}