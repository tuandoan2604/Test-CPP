#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WindowManager
{
private:
    vector<string> window;

public:
    void open(const std::string windowName)
    {
        window.push_back(windowName);
    }

    void close(const std::string windowName)
    {
        for(int i = 0; i<window.size(); i++)
        {
            if (window.at(i) == windowName)
            {
                window.erase(window.begin()+i);
            }
        }
    }

    string getTopWindow()
    {
        return window.at(window.size()-1);
    }

    // void Print()
    // {
    //     cout << "The opening windowns are: ";
    //     for (int i=0; i<window.size(); i++)
    //     {
    //         cout<< window.at(i)<< " ";
    //     }
    //     cout<< endl;
    // }
};

#ifndef RunTests
int main()
{
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.close("Browser");
    std::cout<< wm.getTopWindow();
}
#endif
