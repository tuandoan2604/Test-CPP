#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include "Header.h"

class Certificate
{
private:
    /* data */
    int certificateID;
    string certificate_name;
    char certificate_rank;
    string certificate_date;
public:
    Certificate(/* args */);
    ~Certificate();
};

Certificate::Certificate(/* args */)
{
}

Certificate::~Certificate()
{
}


#endif