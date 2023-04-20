#pragma once
#include "Student.h"
#include "StudentA.h"
#include "StudentB.h"
#include "StudentC.h"

class Admissions
{
private:
	vector<Student*> St;
public:
	Admissions();
	
	void AddstA();
	
	void AddstB();

	void AddstC();
	
	void displayinfor();

	void searchbySBD();

	~Admissions();
	
};