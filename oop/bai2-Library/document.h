#ifndef DOCUMENT
#define DOCUMENT

using namespace std;

class Document
{
protected:
    int id;
    string publisher;
    int releaseNum;
public:

    Document(int id, string publisher, int releaseNum)
    {
        this->id = id;
        this->publisher = publisher;
        this->releaseNum = releaseNum;
    }

    Document()
    {
        cout << "Enter id: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Publisher: ";
        getline(cin, publisher);

        cout << "Enter release number: ";
        cin >> releaseNum;
        cin.ignore();
    }

    int getID()
    {
        return id;
    }

    virtual void displayInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Publisher: " << publisher << endl;
        cout << " Release number: " << releaseNum << endl; 
    }

    virtual ~Document(){cout << "xoa doc";}
};

#endif