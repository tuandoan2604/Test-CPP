#include "Trucks.h"


	Trucks::Trucks()
	{}
	Trucks::Trucks(int ID, string Brand, int Year, int Price, string Color, int Weight) : Transports(ID, Brand, Year, Price, Color)
	{
		this->Weight = Weight;
	}
	int Trucks::getWeight()
	{
		return Weight;
	}
	void Trucks::setWeight(int Weight)
	{
		this->Weight = Weight;
	}
	void Trucks::display()
	{
		Transports::display();
		cout << "\tWeight: " << Weight << endl;
	}
	Trucks::~Trucks()
	{}