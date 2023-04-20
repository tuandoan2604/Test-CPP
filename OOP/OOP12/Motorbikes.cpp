#include "Motorbikes.h"


	MotorBikes::MotorBikes()
	{}
	MotorBikes::MotorBikes(int ID, string Brand, int Year, int Price, string Color, int Power) : Transports(ID, Brand, Year, Price, Color)
	{
		this->Power = Power;
	}
	int MotorBikes::getPower()
	{
		return Power;
	}
	void MotorBikes::setPower(int Power)
	{
		this->Power = Power;
	}
	void MotorBikes::display()
	{
		Transports::display();
		cout << "\tPower: " << Power << endl;
	}
	MotorBikes::~MotorBikes()
	{}