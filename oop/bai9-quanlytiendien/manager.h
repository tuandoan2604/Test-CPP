#ifndef MANAGER_H
#define MANAGER_H

#include "customer.h"
#include <unordered_map>

class Manager
{
    unordered_map<string, Customer> customerList;

public:
    void addCustomer()
    {
        Customer customer;
        customerList.insert(make_pair(customer.getElectricNum(), customer));
    }

    void changeInfor(string electricNum)
    {
        if(customerList.empty())
        {
            cout <<"List empty!\n";
        }
        else
        {
            auto it = customerList.find(electricNum);
            if( it != customerList.end())
            {
                string name = "";
                cout << "Enter change name or press enter to pass: ";
                getline(cin, name);
                if(name != "")
                {
                    it->second.setName(name);
                }
                int houseNum;
                cout << "Enter change hourse number or press 0 to pass: ";
                cin >> houseNum;
                cin.ignore();
                if(houseNum != 0)
                {
                    it->second.setHouseNum(houseNum);
                }
            }
        }
    }

    bool deleteCustomer(string electricNum)
    {
        if(customerList.empty())
        {
            return false;
        }

        auto it = customerList.find(electricNum);
        if(it != customerList.end())
        {
            customerList.erase(electricNum);
            return true;
        }
        return false;
    }

    void displayAllCustomer()
    {
        if(customerList.empty())
        {
            cout << "list null\n";
        }

        for(auto it : customerList)
        {
            it.second.displayCustomer();
        }
    }

    ~Manager() { customerList.clear();}
};

#endif