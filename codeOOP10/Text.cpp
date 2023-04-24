#include "Text.h"
#pragma once
#include <regex>
#include <string>

Text::Text()

{
    st="";
}

Text::Text(string st)
{
    this->st=st;
}

void Text::setSt(string st)
{
    regex partten("^\\s+|\\s+$");
    st = regex_replace(st,partten, "" );
    st= regex_replace(st,regex ("\\s+")," ");
    this->st=st;
}

string Text::getSt()
{
    return st;
}

void Text::Count()
{
    
    regex pattern("\\b\\w+\\b");
    smatch matches;
    int count=0;
    string st1=st;

    while (regex_search(st1, matches, pattern)) {
        count+=1;
        st1 = matches.suffix().str(); 
    }
    cout<<"Number of words : "<<count<<endl;
}

void Text::CountA()
{
    regex pattern("a", regex_constants :: icase);  // [Aa]  , "A|a"
    smatch matches;
    int count=0;
     string st1=st;

    while (regex_search(st1, matches, pattern)) {
        count+=1;
        st1 = matches.suffix().str(); 
        
    }
    cout<<"Number of A and a : "<<count<<endl;
}

Text::~Text()
{
}
