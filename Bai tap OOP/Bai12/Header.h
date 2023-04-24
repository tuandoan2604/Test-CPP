#include <iostream>

using namespace std;

void standalize(string& in_S)
{
    while (in_S[0] == ' ')
    {
        in_S.erase(in_S.begin());
    }
    
    while (in_S[in_S.size()-1] == ' ' || in_S[in_S.size()-1] == '\t' || in_S[in_S.size()-1] == '\n')
    {
        in_S.erase(in_S.end()-1);
    }
    

    for (int i = 0; i < in_S.size()-1; i++)
    {
        if(in_S[i] == ' '&& in_S[i+1] == ' ')
        {
            in_S.erase(in_S.begin()+i);
            i--;
        }
        if(in_S[i]<'a')
        {
            in_S[i] = in_S[i] + ('a'-'A');
        }
    }
}