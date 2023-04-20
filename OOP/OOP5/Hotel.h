#pragma once
#include "Renter.h"

class Hotel
{
private:
	vector<Renter*> ListRent;
public:
	Hotel();
	
	void AddRenter();
	
	void DeletebyCCCD();
	
	void Bill();
	
	~Hotel();
	
};