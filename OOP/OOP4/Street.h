#pragma once
#include "Family.h"

class Street
{
private:
	vector <Family> ListFamily;
public:
	Street();
	
	void AddFamily();

	void DisplayAll();

	~Street();

};