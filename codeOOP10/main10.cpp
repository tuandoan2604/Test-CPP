#include "Text.h"
#include "Text.cpp"
int main(){
    Text t1;
    string st;
    cout<<"Enter string :"<<endl;
    
    getline(cin, st);
    t1.setSt(st);
    cout<<"st :"<<t1.getSt()<<endl;
    t1.Count(); 
    t1.CountA();
}