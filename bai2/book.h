#include "document.h"
using namespace std;

class Book : public Document{
    private:
        string author;
        int numberPage;

    public:
        string getAuthor() const;
        void setAuthor();
        int getNumberPage() const;
        void setNumberPage();
        int getType(){return 1;}
        void input();
        void showInformation();
        ~Book(){
            cout<<"Destruct Book"<<endl;
        }
};

string Book::getAuthor() const
{
    return author;
}

void Book::setAuthor()
{
    cout << "Enter Author: ";
    cin.ignore();
    getline(cin, author);
}

int Book::getNumberPage() const
{
    return numberPage;
}

void Book::setNumberPage()
{
    cout << "Enter nuMDer of page: ";
    Cin_int(numberPage);
}

void Book::input(){
    Document::input();
    setAuthor();
    setNumberPage();
}
void Book::showInformation()
{
    Document::showInformation();
    cout << "     Auther: " << getAuthor() << "        NuMDer of page: " << getNumberPage() << endl;
}