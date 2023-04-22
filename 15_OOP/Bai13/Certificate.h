#pragma once
#include "Exception.h"
#include <iostream>
#include <string>
using namespace std;

class Certificate{
    private:
        int CertificatedID; 
        string CertificateName; 
        int CertificateRank; 
        string CertificatedDate;

    public:
        int GetCertificatedID() const {
                return CertificatedID;
        }

        void SetCertificatedID() {
                cout <<"Enter CertificatedID:";
                cin>>CertificatedID;
        }

        string GetCertificateName() const {
                return CertificateName;
        }

        void SetCertificateName() {
                cout << "Enter CertificateName:";
                cin.ignore();
                getline(cin, CertificateName);
        }

        int GetCertificateRank() const {
                return CertificateRank;
        }

        void SetCertificateRank() {
                cout << "Enter CertificateRank:";
                cin >>CertificateRank;
        }

        string GetCertificatedDate() const {
                return CertificatedDate;
        }

        void SetCertificatedDate() {
                cout << "Enter CertificatedDate:";
                Date_valid(CertificatedDate);
        }
        void Input(){
            SetCertificatedID();
            SetCertificateName();
            SetCertificatedDate();
            SetCertificateRank();
        }
        void Show_information(){
            cout<<"     CertificatedID:"<<GetCertificatedID()<<"     CertificateName: "<<GetCertificateName()
            <<"    CertificatedDate:"<<GetCertificatedDate() <<"    CertificateRank:"<<GetCertificateRank()<<endl;
        }
        ~Certificate(){
            cout << "=>Destructor Certificate !!!\n";
        }
};