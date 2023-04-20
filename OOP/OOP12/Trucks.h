#pragma once
#include "Transports.h"

class Trucks : public Transports
{
	int Weight;
public:
	Trucks();
	
	Trucks(int ID, string Brand, int Year, int Price, string Color, int Weight);
	
	int getWeight();

	void setWeight(int Weight);
	
	void display();

	~Trucks();
	
};