#pragma once
#include "Header.h"

class Renter
{
private:
	string Name;
	int Age;
	int Cccd;
	int NumberRent;
	char TypeRoom;
public:
	Renter();
	
	Renter(string Name, int Age, int Cccd, int NumberRent, char TypeRoom);
	
	string getName();
	
	int getAge();
	
	int getCccd();
	
	void setName(string Name);

	void setAge(int Age);

	void setCccd(int Cccd);

	int getNumberRent();

	char getTypeRoom();
	
	void setNumberRent(int NumberRent);
	
	void setTypeRoom(char TypeRoom);

	void DisplayInfor();

	~Renter();
	
};
