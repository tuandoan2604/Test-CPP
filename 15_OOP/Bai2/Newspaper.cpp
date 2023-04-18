#include "Newspaper.h"
#include "Document.h"

int Newspaper::GetRelease_Day() const
{
    return Release_Day;
}

void Newspaper::SetRelease_Day()
{
    cout<< "Enter Release Day: ";
    Cin_int(Release_Day);
}

void Newspaper::Input(){
    Document::Input();
    SetRelease_Day();
}
void Newspaper::Show_information()
{
    Document::Show_information();
    cout << "    Release_Day: " << GetRelease_Day() << endl;
}