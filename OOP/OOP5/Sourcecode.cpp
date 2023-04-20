#include "Renter.h"
#include "Hotel.h"
/*class Room
{
private:
	int NumberRent;
	char TypeRoom;
public:
	Room()
	{}
	Room(int NumberRent, char TypeRoom) : NumberRent(NumberRent), TypeRoom(TypeRoom)
	{}
	int getNumberRent()
	{
		return NumberRent;
	}
	char getTypeRoom()
	{
		return TypeRoom;
	}
	void setNumberRent(int NumberRent)
	{
		this->NumberRent = NumberRent;
	}
	void setTypeRoom(char TypeRoom)
	{
		this->TypeRoom = TypeRoom;
	}
	int PriceA()
	{
		return NumberRent * 500;
	}
	int PriceB()
	{
		return NumberRent * 300;
	}
	int PriceC()
	{
		return NumberRent * 100;
	}
};*/

int main()
{
	Hotel Hl;
	int choose;
run:;
	cout << "Enter 1: Add Customer" << endl;
	cout << "Enter 2: Delete Customer" << endl;
	cout << "Enter 3: Get Bill" << endl;
	cout << "Enter 4: Exit!!!" << endl;
	cout << "Vui long lua chon: " ;
	cin >> choose;
	switch (choose)
	{
	case ADD:
		Hl.AddRenter(); 
		goto run;
	case DELETE:
		Hl.DeletebyCCCD();
		goto run;
	case GET_BILL:
		Hl.Bill();
		goto run;
	case EXIT:
		exit(0);
	default:
		cout << "Not Valid. Do again!" << endl;
		goto run;
	}
	return 0;
}