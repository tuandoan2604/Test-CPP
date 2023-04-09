#include <iostream>
#include <unordered_map>
#include <string>
#include <memory>

using namespace std;

class Archive
{
    class Record
    {
    public:
        Record(string title, string content)
        {
            this->title = title;
            this->content = content;
        }

        string title;
        string content;
    };

public:

    void add(int id, string title, string content)
    {
        records[id] = make_unique<Record>(title, content);
    }

    void remove(int id, string& title, string& content)
    {
        auto it = records.find(id);
        unique_ptr<Record>& doc = it->second;
        title = doc->title;
        content = doc->content;
        records.erase(it);
    }

    void clear()
    {
        records.clear();
    }

private:

    unordered_map<int, unique_ptr<Record>> records;
};

#ifndef RunTests

int main()
{
    Archive archive;
    archive.add(123456, "Hamlet", "Hamlet, Prince of Denmark.");
    archive.add(123457, "Othello", "Othello, the Moore of Venice.");
    string title, content;
    archive.remove(123456, title, content);
    cout << title << '\n';
    cout << content;
    archive.clear();
}

#endif