#include <iostream>
#include <unordered_map>
#include <string>

class Archive
{
    class Record
    {
    public:
        Record(std::string title, std::string content)
        {
            this->title = title;
            this->content = content;
        }
        ~Record()
        {
            // Destructor to deallocate memory
        }
        std::string title;
        std::string content;
    };
public:
    void add(int id, std::string title, std::string content)
    {
        records[id] = new Record(title, content);
    }

    void remove(int id, std::string& title, std::string& content)
    {
        std::unordered_map<int, Record*>::iterator it = records.find(id);

        Record* doc = it->second;
        title = doc->title;
        content = doc->content;
        delete doc; // Deallocate memory occupied by Record object
        records.erase(it);

    }
    void clear()
    {
        for (auto& pair : records)
        {
            delete pair.second; // Deallocate memory for all records
        }
        records.clear();
    }
private:
    std::unordered_map<int, Record*> records;
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
    std::cout << content << "\n";



    archive.clear();

}
#endif
