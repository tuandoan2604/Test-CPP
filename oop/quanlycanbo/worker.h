#ifndef WORKER
#define WORKER

using namespace std;

#include "cadres.h"


class Worker : public Cadres
{
private:
    int rank;
public:
    Worker(string name, int age, Gender gender, string address, int rank) : Cadres(name, age, gender, address)
    {
        if(rank >=1 && rank <=10)
        {
            this->rank = rank;
        }
    }

    Worker()
    {
        int a;
        cout << "Enter rank (1-10): " ;
        cin >> a;
        cin.ignore();
        while( a < 1 || a > 10)
        {
            cout << "Incorrect, rank(1-10): " ;
            cin.ignore();
            cin >> a;
            cin.ignore();
        }
        rank = a;
    }

    void displayInfo ()
    {
        cout << "Worker: " << endl;
        Cadres::displayInfo();
        cout << "rank: " << rank << endl;
    }

    ~Worker() {}
};

#endif