
// C++ code to demonstrate copy of vector 
// by iterative method. 
#include<iostream> 
#include<vector> 
using namespace std; 


// int main() 
// { 
//     vector <string > V;
//     V = {"1tran" , "duc", "11ngoc","11"};

//     for (const auto&v :V ){
//         cout<< string("12").find_first_not_of("0123456789") <<endl ;
//     }

//     // string a = "tran";
//     // a =  a + "duc";
//     // cout<<a;


//     return 0; 
// } 

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World 123!";
    size_t found = str.find_first_not_of("0123456789");
    std::cout <<found<<std::endl;
    if (found != std::string::npos) {
        std::cout << "The string contains non-alphanumeric character at position " << found << std::endl;
    } else {
        std::cout << "The string contains only alphanumeric characters." << std::endl;
    }
    return 0;
}