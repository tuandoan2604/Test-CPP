#ifndef RECEIPT_H
#define RECEIPT_H

#include "Client.h"

#define NAME_ 1
#define ADDRESS_ 2
#define METERID_ 3
#define OLD_NUM 4
#define NEW_NUM 5

class Receipt: public Client
{
private:
    /* data */
    int old_number;
    int new_number;
public:
    Receipt(/* args */);
    ~Receipt();

    int payment();
    void revise();
    void display();
    void setOld();
    void setNew();
};

Receipt::Receipt(/* args */)
{
    setOld();
    setNew();    
}

Receipt::~Receipt()
{
}

void Receipt::setOld(){
    int t_old;
    do
    {
        cout<< "Enter the old number of electric meter: ";
        cin>> t_old;

        if(t_old < 0)
        {
            cout<< "Invalid number: Old number is less than 0!";
        }
    } while (t_old < 0);
    old_number = t_old;
}

void Receipt::setNew(){
    int t_new;
    do
    {
        cout<< "Enter the current number of electric meter: ";
        cin>> t_new;

        if(t_new < 0 || t_new<old_number)
        {
            cout<< "Invalid number: Current number is less than old number!";
        }
    } while (t_new < 0 || t_new<old_number);
    new_number = t_new;
}

int Receipt::payment()
{
    return (new_number-old_number)*5;
}

void Receipt::revise()
{
    cout<< "[CUSTOMER IN REVISE]";
    display();
    cout<< "Choose one of the information you want to rewrite \n";
    cout<< "1. Name     2. Address      3. Meter code \n";
    cout<< "4. Old meter indicator      5. New meter indicator \n";

    int in_choice;
    cin>> in_choice;

    switch (in_choice)
    {
        case NAME_:
        {
            cout<< "Enter the new name: ";
            string t_name;
            cin.ignore();
            getline(cin, t_name);
            setName(t_name);
            break;
        }
        case ADDRESS_:
        {
            cout<< "Enter the new appartment number: ";
            int t_address;
            cin>> t_address;
            setAddress(t_address);
            break;
        }
        case METERID_:
        {
            cout<< "Enter the new meter code: ";
            int t_code;
            cin>> t_code;
            setID(t_code);
            break;
        }
        case OLD_NUM:
        {
            cout<< "Enter the revision of the old meter indicator\n";
            setOld();
            break;
        }
        case NEW_NUM:
        {
            cout<< "Enter the revision of the new meter indicator\n";
            setNew();
            break;
        }
        default:
            cout<< "Invalid choice!!!";
            break;
        }
}

void Receipt::display()
{
    cout<< "[DISPLAY] Customer ID meter: "<< ID<< ", name: "<< name<< ", address: "<< address;
    cout<< ", old: "<< old_number<< ", new: "<< new_number<< endl;
    cout<< "PAYMENT: "<< payment()<< endl;
}

#endif