#include <iostream>
#include <set>
#include <string>

using namespace std;

class Archive
{
    class Record
    {
    public:
        Record(int id, std::string title, std::string content)
        {
            this->title = title;
            this->content = content;
            this->id = id;
        }
        string title;
        string content;
        int id;
    };
public:
    void add(int id, std::string title, std::string content)
    {
        // records[id] = new Record(title, content);
        Record *re = new Record(id, title, content);
        records.insert(re);
    }

    void remove(int id, std::string& title, std::string& content)
    {
        // set<int, Record*>::iterator it = records.begin();
        auto it = records.begin();

        for(; it != records.end(); ++it)
        {
            if((*it)->id == id)
            {
                break;
            }
        }

        // Record* doc = it;
        title = (*it)->title;
        content = (*it)->content;
        records.erase(it);
    }
    void clear()
    {
        records.clear();
    }
    void PrintSize()
    {
        cout<< "Size "<< records.size()<< endl;
    }

private:
    set<Record*> records;
};

#ifndef RunTests
int main()
{
    Archive archive;
    archive.add(123456, "Hamlet", "Hamlet, Prince of Denmark.");
    archive.add(123457, "Othello", "Othello, the Moore of Venice.");

    std::string title, content;
    archive.remove(123456, title, content);

    std::cout << title << '\n';
    std::cout << content<< endl;

    archive.add(123458, "Alpha", "Alpha book");

    archive.PrintSize();

    archive.clear();
    archive.PrintSize();
    
}
#endif
