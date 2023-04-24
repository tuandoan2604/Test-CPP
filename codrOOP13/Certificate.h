#pragma once
#include <iostream>
using namespace std;
class Certificate
{
private:
    int certificatedID;
    string certificateName;
    int certificateRank;
    string cretificateDate;

public:
    int getCertificatedID()
    {
        return this->certificatedID;
    }
    void setCertificatedID(int certificatedID)
    {
        this->certificatedID = certificatedID;
    }
    string getCertificateName()
    {
        return this->certificateName;
    }
    void setCertificateName(string certificateName)
    {
        this->certificateName = certificateName;
    }
    int getCertificateRank()
    {
        return this->certificateRank;
    }
    void setCertificateRank(int certificateRank)
    {
        this->certificateRank = certificateRank;
    }
    string getCretificateDate()
    {
        return this->cretificateDate;
    }
    void setCretificateDate(string cretificateDate)
    {
        this->cretificateDate = cretificateDate;
    }

    Certificate(/* args */);
    Certificate(int certificatedID, string certificateName, int certificateRank, string cretificateDate)
    {
        this->certificatedID = certificatedID;
        this->certificateName = certificateName;
        this->certificateRank = certificateRank;
        this->cretificateDate = cretificateDate;
    };
    void display(){
        cout<<"Certificate ID :"<<getCertificatedID()<<endl;
        cout<<"Certificate Name :"<<getCertificateName()<<endl;
        cout<<"Certificate rank :"<<getCertificateRank()<<endl;
        cout<<"Certificate date :"<<getCretificateDate()<<endl;
    }
    ~Certificate();
};

Certificate::Certificate(/* args */)
{
}

Certificate::~Certificate()
{
}
