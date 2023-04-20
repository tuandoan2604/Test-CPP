#include "Student8.h"
#include <iostream>
#pragma once
using namespace std;
class BorrowCard : public Student8
{
private:
    int idCad;
    int borrowDay;
    int lendDay;
    int idBook;

public:
    BorrowCard(/* args */);
    BorrowCard(string fullName, int age, int numClass, int idCad, int borrowDay, int lendDay, int idBook);
    void setIdCad(int idCad);
    void setBorrowDay(int borrowDay);
    void setLendDay(int lendDay);
    void setIdBook(int idBook);
    int getIdCad();
    int getBorrowDay();
    int getLendDay();
    int getIdBook();
    
    ~BorrowCard();
};
