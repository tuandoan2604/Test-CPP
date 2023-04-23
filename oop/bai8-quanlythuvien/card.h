#ifndef CARD_H
#define CARD_H

#include "student.h"

using namespace std;

class Card
{
private:
    Student student;
    string id;
    int borrowDate;
    int paymentDate;
    int bookId;
public:
    Card()
    {
        cout << "Enter ID: ";
        getline(cin, id);
        cout << "Enter borrow date: ";
        cin >> borrowDate;
        cout << "Enter payment date: ";
        cin >> paymentDate;
        cout << "Enter book id: ";
        cin >> bookId;
        cin.ignore();
    }

    Card(Student student, string id, int borrowDate, int paymentDate, int bookId)
    {
        this->student = student;
        this->id = id;
        this->borrowDate = borrowDate;
        this->paymentDate = paymentDate;
        this->bookId = bookId;
    }

    void setStudent(Student student) {this->student = student;}
    void setId(string id) {this->id = id;}
    void setBorrowDate(int borrowDate) {this->borrowDate = borrowDate;}
    void setPaymentDate(int paymentDate) {this->paymentDate = paymentDate;}
    void setBookId(int bookId) {this->bookId = bookId;}

    Student getStudent() { return student;}
    string getId() {return id;}
    int getBorrowDate() { return borrowDate;}
    int getPaymentDate() {return paymentDate;}

    void displayCard()
    {
        cout << "Information of card id: " << id << endl;
        cout << "STUDENT\n";
        student.displayStudent();
        cout << "INFOR\n";
        cout << "Borrow Date: " << borrowDate << "\t";
        cout << "Payment date: " << paymentDate << "\t";
        cout << "Book id: " << bookId << endl;
    }

    ~Card(){}

};

#endif