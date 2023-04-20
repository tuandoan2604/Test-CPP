#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iostream>

using namespace std;

class Document
{
    string str;
public:
    Document(){}

    Document (string str) {this->str = str;}

    int countWord()
    {
        int count = 0;
        bool isWord = false;
        if(str!="")
        {
            for (int i = 0; i < str.length(); i++)
            {
                if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                {
                    isWord = false;
                } else if(!isWord)
                {
                    isWord = true;
                    count++;
                }
            }
        }
        return count;
    }

    int countChar(char ch)
    {
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == ch || str[i] == tolower(ch) || str[i] == toupper(ch))
            {
                count++;
            }
        }
        return count;
    }

    void standardizedDoc()
    {
        bool isWord = true;
        int count = 0;
        while(true)
        {
            if(str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
            {
                str.erase(0,1);
                continue;
            } 
            else
            {
                break;
            }
        }

        while (true)
        {
            if(str[str.length()-1] == ' ' || str[str.length()-1] == '\t' || str[str.length()-1] == '\n')
            {
                str.erase(str.length()-1,1);
                continue;
            } 
            else
            {
                break;
            }
        }

        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            {
                isWord = false;
                count ++;
                if(count == 2)
                {
                    count = 1;
                    str.erase(i,1);
                    i--;
                }
            } else if(!isWord)
            {
                isWord = true;
                count = 0;
            }
        }
        
    }

    string getString() {return str;}
};

#endif