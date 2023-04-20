#include "Hotel.h"

	Hotel::Hotel()
	{}
	void Hotel::AddRenter()
	{
		string Name;
		int Age;
		int Cccd;
		int NumberRent;
		char TypeRoom;
		Renter* A = new Renter;
		cout << "Vui long nhap thong tin ca nhan: " << endl;
		cout << "Name: ";
		cin >> Name;
		A->setName(Name);
		cout << "Age: ";
		cin >> Age;
		A->setAge(Age);
		cout << "CCCD: ";
		cin >> Cccd;
		A->setCccd(Cccd);
		cout << "So ngay thue: ";
		cin >> NumberRent;
		A->setNumberRent(NumberRent);
		cout << "Loai phong muon thue: ";
		cin >> TypeRoom;
		A->setTypeRoom(TypeRoom);
		ListRent.push_back(A);
		cout << "Quy khach da nhap thong tin thanh cong!" << endl;
	}
	void Hotel::DeletebyCCCD()
	{
		int CCCD;
		cout << "Vui long nhap CCCD de xoa thong tin: ";
		cin >> CCCD;
		for (int i = 0; i < ListRent.size(); i++)
		{
			if (ListRent[i]->getCccd() == CCCD)
			{
				delete ListRent[i];
				ListRent.erase(ListRent.begin() + i);
				cout << "Da xoa thong tin thanh cong!" << endl;
				break;
			}
			else
			{
				cout << "Khong tim thay thong tin yeu cau!" << endl;
			}
		}
	}
	void Hotel::Bill()
	{
		int CCCD;
		cout << "Moi nhap CCCD de thanh toan: ";
		cin >> CCCD;
		for (int i = 0; i < ListRent.size(); i++)
		{
			if (ListRent[i]->getCccd() == CCCD)
			{
				switch (ListRent[i]->getTypeRoom())
				{
				case 'A':
					cout << "So tien can thanh toan: " << 500 * ListRent[i]->getNumberRent() << endl;
					break;
				case 'B':
					cout << "So tien can thanh toan: " << 300 * ListRent[i]->getNumberRent() << endl;
					break;
				case 'C':
					cout << "So tien can thanh toan: " << 100 * ListRent[i]->getNumberRent() << endl;
					break;
				default:
					break;
				}
				break;
			}
		}
	}
	Hotel::~Hotel()
	{}