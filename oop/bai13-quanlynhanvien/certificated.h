#ifndef CERTIFI_H
#define CERTIFI_H

#include <string>
#include <iostream>
#include <ctime>
#include "day.h"
#include "exceptionEmployee.h"
#include "document.h"

using namespace std;

class Certificate
{
    string certificateId;
    string certificateName;
    string certificateRank;
    Day certificatedDate;
public:
    Certificate() {}

    Certificate(string certificateId,string certificateName, string certificateRank, Day certificatedDate) {
        this->certificateId = certificateId;
        this->certificateName = certificateName;
        this->certificateRank = certificateRank;
        this->certificatedDate = certificatedDate;
    }

    ~Certificate() {}

    void setCertificateId(string certificateId) {this->certificateId = certificateId;}
    void setCertificateName(string certificateName) {this->certificateName = certificateName;}
    void setCertificateRank(string certificateRank) {this->certificateRank = certificateRank;}
    void setCertificatedDate (Day certificatedDate) {this->certificatedDate = certificatedDate;}

    string getCertificateId() {return certificateId;}
    string getCertificateName() {return certificateName;}
    string getCertificateRank() {return certificateRank;}
    Day getCertificatedDate () {return certificatedDate;}

    void showCer()
    {
        cout << "CertificatedID: " << certificateId << endl;
        cout << "CertificateName: " << certificateName << endl;
        cout << "CertificateRank: " << certificateRank << endl;
        cout << "CertificatedDate: " ;
        certificatedDate.showDay();
    }
};


#endif