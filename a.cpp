
// C++ code to demonstrate copy of vector 
// by iterative method. 
#include<iostream> 
#include<vector> 
using namespace std; 

class ngoc{
    public:
        int a = 10;

        void fun(int a){
            this->a = a;
        }
};
int main() 
{ 
    ngoc tran;
    tran.fun(11);
    cout<<tran.a;

    return 0; 
} 