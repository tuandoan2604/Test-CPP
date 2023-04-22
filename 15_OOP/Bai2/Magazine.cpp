#include "Magazine.h"

int Magazine::GetRelease_month() const
{
    return Release_month;
}

void Magazine::SetRelease_month()
{
    cout << "Enter Release_month:  ";
    Cin_int(Release_month);
}

void Magazine::Input(){
    Document::Input();
    SetRelease_month();
}
void Magazine::Show_information()
{
    Document::Show_information();
    cout << "    Release_month: " << GetRelease_month() << endl;
}