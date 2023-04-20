#include <iostream>
#include <string>
#include <mutex>
#include<thread>
using namespace std;

class Singleton
{
private:

    string name, loves;
    static Singleton* instancePtr;
    //static mutex mLocker;
    
    Singleton()
    {

    }
    Singleton(string name, string loves)
    {
        this->name = name;
        this->loves = loves;
    }
public:

    Singleton(const Singleton& obj) = delete;

    static Singleton* getInstance(string name, string loves)
    {
        if (instancePtr == NULL)
        {
            instancePtr = new Singleton(name, loves);
            return instancePtr;
        }
        else
        {
            return instancePtr;
        } 
    }
 
    void setvalues(string name, string loves)
    {
        this->name = name;
        this->loves = loves;
    }
    void print()
    {
        cout << name << " Loves " <<
            loves << "." << endl;
    }
};
void threada()
{
    this_thread::sleep_for(chrono::milliseconds(10000));
    Singleton* singleton = Singleton::getInstance("a", "c");
    singleton->print();
}
void threadb()
{
    this_thread::sleep_for(chrono::milliseconds(10000));
    Singleton* singleton = Singleton::getInstance("b", "c");
    singleton->print();
}
Singleton* Singleton::instancePtr = NULL;
// mutex Singleton::mLocker;

int main()
{ 
    thread t1(threada);
    thread t2(threadb);
   
    t2.join();
    t1.join();
    return 0;
}