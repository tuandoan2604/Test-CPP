#pragma once

#include "Customer.h"

class Bill{
    private:
        Custumer * custumer = new Custumer();
        int New_indicator;
        int Old_indicator;
        int pay;

    public:
        int GetNew_indicator() const {
                return New_indicator;
        }

        void SetNew_indicator() {
                cout << "Enter New_indicator: ";
                cin >> New_indicator;
        }

        int GetOld_indicator() const {
                return Old_indicator;
        }

        void SetOld_indicator() {
                cout << "Enter Old_indicator: ";
                cin >> Old_indicator;
        }

        int GetPay() const {
                return pay;
        }

        void SetPay() {
                pay = (New_indicator - Old_indicator)*5;
        }
        Custumer * Get_Customer(){
            return custumer;
        }
        void Input(){
            custumer->Input();
            SetNew_indicator();
            SetOld_indicator();
            SetPay();
        }
        void Show_Information(){
            custumer->Show_Information();
            cout << "New: "<<GetNew_indicator() << "    OLd: "<<GetOld_indicator()<<"   Pay: "<<GetPay()<<endl;
        }
        ~Bill(){
            cout << "=>Destructor Bill !!!\n";
            delete custumer;
        }
};