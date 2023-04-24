#include "Text.h"

int main()
{
    string s;
    getline(cin, s);

    Text str = Text(s);

    // cout<< "Number of words: "<< str.countWords()<< endl;
    // cout<< "Numer of a and A letter: "<< str.countA()<< endl;
    str.standardized();

    cout<< "After: >>>"<< str.getText() << "<<<"<< endl;
    cout<< "End letter: "<< str.endLetter()<< endl;
}