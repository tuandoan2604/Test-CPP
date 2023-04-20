#include "BorrowCard.h"
#include "Student8.h"
#pragma once
#include <string>

BorrowCard::BorrowCard()
{
}

BorrowCard::BorrowCard(string fullName, int age, int numClass, int idCad, int borrowDay, int lendDay, int idBook) : Student8(fullName, age, numClass)
{
    this->idCad=idCad;
    this->borrowDay=borrowDay;
    this->lendDay=lendDay;
    this->idBook=idBook;
}

void BorrowCard::setIdCad(int idCad)
{
    this->idCad=idCad;
}

void BorrowCard::setBorrowDay(int borrowDay)
{
    this->borrowDay=borrowDay;
}

void BorrowCard::setLendDay(int lendDay)
{
    this->lendDay=lendDay;
}

void BorrowCard::setIdBook(int idBook)
{
    this->idBook=idBook;
}

int BorrowCard::getIdCad()
{
    return idCad;
}

int BorrowCard::getBorrowDay()
{
    return borrowDay;
}

int BorrowCard::getLendDay()
{
    return lendDay;
}

int BorrowCard::getIdBook()
{
    return idBook;
}



BorrowCard::~BorrowCard()
{
}
