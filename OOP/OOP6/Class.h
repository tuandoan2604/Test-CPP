#pragma once
#include "Student.h"

class Class
{
	vector <Student*> ListStudent;
public:
	Class();
	
	void AddStudent();
	
	void ShowInfor();
	
	void ShowAge20();
	
	void ShowAge23DN();
	
	~Class();
	
};
