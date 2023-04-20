#include "Renter.h"


	Renter::Renter()
	{}
	Renter::Renter(string Name, int Age, int Cccd, int NumberRent, char TypeRoom) : Name(Name), Age(Age), Cccd(Cccd), NumberRent(NumberRent), TypeRoom(TypeRoom)
	{}
	string Renter::getName()
	{
		return Name;
	}
	int Renter::getAge()
	{
		return Age;
	}
	int Renter::getCccd()
	{
		return Cccd;
	}
	void Renter::setName(string Name)
	{
		this->Name = Name;
	}
	void Renter::setAge(int Age)
	{
		this->Age = Age;
	}
	void Renter::setCccd(int Cccd)
	{
		this->Cccd = Cccd;
	}
	int Renter::getNumberRent()
	{
		return NumberRent;
	}
	char Renter::getTypeRoom()
	{
		return TypeRoom;
	}
	void Renter::setNumberRent(int NumberRent)
	{
		this->NumberRent = NumberRent;
	}
	void Renter::setTypeRoom(char TypeRoom)
	{
		this->TypeRoom = TypeRoom;
	}
	void Renter::DisplayInfor()
	{
		cout << "\tName: " << Name << endl;
		cout << "\tAge: " << Age << endl;
		cout << "\tCCCD: " << Cccd << endl;
	}
	Renter::~Renter()
	{}