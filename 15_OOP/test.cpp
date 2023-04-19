
#include <iostream>
#include <string>
using namespace std;

int main () {
    
    string a, b;
    int c;
    cin>>c;
    cin.ignore();
while(1){
    cout << "Nhap a: ";
    // cin.ignore();
    getline(cin,a);


    cout << "Nhap b: ";
    // cin.ignore();
    getline(cin,b);

    cout <<a<<":"<<b<<endl;

}
    return 0;
}