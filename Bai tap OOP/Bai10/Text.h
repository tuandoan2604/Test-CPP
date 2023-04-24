#ifndef TEXT_H
#define TEXT_H

#include "Header.h"

class Text
{
private:
    /* data */
    string characters;
public:
    Text(/* args */);
    Text(string s);
    ~Text();

    int countWords();
    int countA();
    void standardized();

    string getText(){return characters;}
    char endLetter(){return characters[characters.size()-1];}
};

Text::Text(/* args */)
{
    cout<< "Enter the string: ";
    cin>> characters;
}

Text::Text(string s)
{
    characters = s;
}

Text::~Text()
{
}

int Text::countWords()
{
    int count = 0;
    for(int i=0; i<characters.size()-2; i++)
    {
        if(characters[i] != ' ' && (characters[i+1] == ' ' || i+1 == (characters.size()-1)))
        {
            count++;
        }
    }
    return count;
}

int Text::countA()
{
    int countA = 0;
    for (int i = 0; i < characters.size(); i++)
    {
        if(characters[i] == 'a' || characters[i] == 'A')
        {
            countA++;
        }
    }
    return countA;
}

void Text::standardized()
{
    
    while (characters[0] == ' ')
    {
        characters.erase(characters.begin());
    }
    
    while (characters[characters.size()-1] == ' ' || characters[characters.size()-1] == '\t' || characters[characters.size()-1] == '\n')
    {
        characters.erase(characters.end()-1);
    }
    

    for (int i = 0; i < characters.size()-1; i++)
    {
        if(characters[i] == ' '&& characters[i+1] == ' ')
        {
            characters.erase(characters.begin()+i);
            i--;
        }
    }
}

#endif