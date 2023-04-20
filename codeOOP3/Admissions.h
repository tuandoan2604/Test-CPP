#pragma once
#include <iostream>
using namespace std;
#include "Candidates.h"
#include "BlockA.h"
#include "BlockB.h"
#include "BlockC.h"
#include <vector>
#define KHOI_A 1
#define KHOI_B 2
#define KHOI_C 3
class Admissions
{
private:
    vector <Candidates*> listCandidate;
public:
    Admissions();
    void addCandidate();
    void showInformation();
    void findById();
    void exitProgram3();
};


