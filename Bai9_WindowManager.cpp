

#include <iostream>
#include <string>
#include <list>
using namespace std;

class WindowManager
{
    list <string> nameWindow;

public:
    void open(const std::string windowName)
    {
        // bool check =true;
        
        // for( auto conTro =nameWindow.begin(); conTro!= nameWindow.end(); ++conTro){
            
        //     if(*conTro == windowName){
        //         nameWindow.erase(conTro);
        //         nameWindow.push_back(windowName);
        //         check=false;
        //     }
            
        // }
        // if(check){
            nameWindow.push_back(windowName);
        // }
    }

    void close(const std::string windowName)
    {
        nameWindow.remove(windowName);
    }

    std::string getTopWindow()
    {
        return nameWindow.back();
    }
};

//#ifndef RunTests
int main()
{
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.open("Browser");
    wm.close("Player");
    wm.close("Browser");
    std::cout << wm.getTopWindow();
}
//#endif



