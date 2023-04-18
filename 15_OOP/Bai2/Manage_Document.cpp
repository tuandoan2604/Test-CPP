#include "Manage_Document.h"

void Manage_Document::Insert_document()
{
int type;
cout << "Choose type Document (1. Book / 2. Magazine / 3. Newspaper): ";
Cin_int(type);

Document* document;
if (type == 1) {
    document = new Book();
} else if (type == 2) {
    document = new Magazine();
} else if (type == 3) {
    document = new Newspaper();
} else {
    std::cout << "Loi! Lua chon khong hop le." << endl;
    return;
}
// Nhập thông tin sau khi chọn loại class
document->Input();
List_Document.push_back(document);}

void Manage_Document::Delete_document()
{
    int ID_Document;
    cout<< "Enter ID_Document to Delete: ";
    cin >>ID_Document;

    for (int i = 0; i < List_Document.size(); i++)
    {
        if (List_Document[i]->GetID_Document() == ID_Document)
        {
            // Giải phóng bộ nhớ heap
            delete List_Document[i];
            // Xóa phần tử trong vector
            List_Document.erase(List_Document.begin() + i);
        }
    }
}
void Manage_Document::Show_informationDocument()
{
    cout << "=========== Document List ==============\n";
    for (Document *tl : List_Document)
    {
        tl->Show_information();
    }
}
void Manage_Document::Search_by_type()
{
    int type;
    cout << "Choose type Document (1. Book / 2. Magazine / 3. Newspaper): ";
    Cin_int(type);
    
    cout << "=========== Information after searching ==============\n";
    for (Document *tl : List_Document)
    {
        if (tl->Get_Type() == type)
        {
            tl->Show_information();
        }
    }
}