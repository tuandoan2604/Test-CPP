#pragma once
#include "Transports.h"

class MotorBikes : public Transports
{
	int Power;
public:
	MotorBikes();
	
	MotorBikes(int ID, string Brand, int Year, int Price, string Color, int Power);

	int getPower();
	
	void setPower(int Power);
	
	void display();

	~MotorBikes();

};
