#include "Cars.h"


	Cars::Cars()
	{}
	Cars::Cars(int ID, string Brand, int Year, int Price, string Color, int NumberSeat, string TypeEngine) : Transports(ID, Brand, Year, Price, Color)
	{
		this->NumberSeat = NumberSeat;
		this->TypeEngine = TypeEngine;
	}
	int Cars::getNumberseat()
	{
		return NumberSeat;
	}
	string Cars::getTypeengine()
	{
		return TypeEngine;
	}
	void Cars::setNumberseat(int NumberSeat)
	{
		this->NumberSeat = NumberSeat;
	}
	void Cars::setTypeengine(string TypeEngine)
	{
		this->TypeEngine = TypeEngine;
	}
	void Cars::display()
	{
		Transports::display();
		cout << "\tNumberSeat: " << NumberSeat << endl;
		cout << "\tTypeEngine: " << TypeEngine << endl;
	}
	Cars::~Cars()
	{}