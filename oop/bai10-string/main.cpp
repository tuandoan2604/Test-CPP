#include "document.h"

using namespace std;

int main()
{
    Document dc;
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    dc = Document(str);
    cout << dc.getString() << endl;
    cout << dc.countWord() << endl;
    cout << dc.countChar('a') << endl;
    dc.standardizedDoc();
    cout << dc.getString() << endl;

    return 0;
}