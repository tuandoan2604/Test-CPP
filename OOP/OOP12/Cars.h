#pragma once
#include "Transports.h"

class Cars : public Transports
{
	int NumberSeat;
	string TypeEngine;
public:
	Cars();
	
	Cars(int ID, string Brand, int Year, int Price, string Color, int NumberSeat, string TypeEngine);

	int getNumberseat();
	
	string getTypeengine();
	
	void setNumberseat(int NumberSeat);
	
	void setTypeengine(string TypeEngine);

	void display();

	~Cars();
	
};
