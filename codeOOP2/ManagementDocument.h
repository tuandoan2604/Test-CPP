#include "Document.h"
#include "Book.h"
#include "Megazine.h"
#include "NewsPaper.h"
#include <vector>

#pragma once
#include <iostream>
using namespace std;
class ManagementDocument
{
private:
    
public:
    vector<Document *> listDocument;
    ManagementDocument();
    void addDocument();
    void deleteDocument();
    void showInformation();
    void findByType();
    

    
};

