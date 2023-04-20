#pragma once
#include <iostream>
using namespace std;
#include "Candidates.h"

#define KHOI_C 3
class BlockC : public Candidates
{
private:
    double literaturePoint;
    double historyPoint;
    double geographyPoint;
public:
    BlockC();
    BlockC(int idNumber, string fullName, string address, int priority, double literaturePoint, double historyPoint, double geographyPoint );
    void setLiteraturePoint(double literaturePoint);
    void setHistoryPoin(double historyPoint);
    void setGeographyPoint(double geographyPoint);
    double getLiteraturePoint();
    double getHistoryPoin();
    double getGeographyPoint();
    int block();
    void display();
    ~BlockC();
};


