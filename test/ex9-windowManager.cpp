#include <iostream>
#include <string>
using namespace std; 
class WindowManager
{
private:
    struct Window {
        string name;
        Window *next;
    };

    Window* topWindow;
public:
    WindowManager() : topWindow(nullptr) {}
    
    void open(const string windowName)
    {
        Window* newWindow = new Window{windowName, topWindow};
        topWindow = newWindow;
    }

    void close(const string windowName)
    {
        Window* currentWindow = topWindow;
        Window* preWindow = nullptr;

        while(currentWindow != nullptr)
        {
            if(currentWindow->name == windowName)
            {
                if(preWindow != nullptr)
                {
                    preWindow->next = currentWindow->next;
                }
                else
                {
                    topWindow = currentWindow->next;
                }
                delete currentWindow;
                return;
            }

            preWindow = currentWindow;
            currentWindow = currentWindow->next;
        }
    }

    string getTopWindow()
    {
        if (topWindow == nullptr)
        {
            return "";
        }
        return topWindow->name;
    }

};

#ifndef RunTests

int main()
{
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.close("Player");
    cout << wm.getTopWindow();
}

#endif