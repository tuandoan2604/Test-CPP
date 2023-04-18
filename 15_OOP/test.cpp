#include <iostream>

using namespace std;

void func(int a){
    if(a){
        cout<<"ok\n";
        return;
    }
    cout << "Not ok";
}

int main(){
    func(1);
    return 0;
}