#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class WindowManager
{
public:
    void open(const std::string windowName)
    {
        window_list.push_back(windowName);
    }

    void close(const std::string windowName)
    {
        auto it = std::find( window_list.begin(), window_list.end(), windowName );
        // Kiếm tra nếu tồn tại
        if(it != window_list.end()){
            window_list.erase(it);
        }
    }

    std::string getTopWindow()
    {
        return window_list.back();
    }
private:
    std::list<std::string> window_list;

};

#ifndef RunTests
int main()
{
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.close("Browser");
    std::cout << wm.getTopWindow();
}
#endif
