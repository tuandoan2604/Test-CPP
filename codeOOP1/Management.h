#include "Cadres.h"
#pragma once
#include "Engineer.h"
#include "Worker.h"
#include "Staff.h"
#include <vector>
class Management
{
private:
    vector <Cadres*> listCadres;
public:
    Management();
    void addCadres();
    void searchByName();
    void showList();
    void exitProgram();
    ~Management();
};


