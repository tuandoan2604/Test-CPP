#include "ManageCustomer.h"


	ManageCustomer::ManageCustomer()
	{}
	void ManageCustomer::AddCustomer()
	{
		string name;
		int numberadd;
		int id;
		cout << "Nhap thong tin khach hang muon them: " << endl;
		cout << "Name: ";
		cin >> name;
		cout << "So nha: ";
		cin >> numberadd;
	again:;
		cout << "Ma cong to: ";
		cin >> id;
		for (int i = 0; i < Cus.size(); i++)
		{
			if (Cus[i]->getid() == id)
			{
				cout << "Ma ID da ton tai!" << endl;
				goto again;
			}
		}
		Customer* C = new Customer(name, numberadd, id);
		Cus.push_back(C);
		cout << "Them moi khach hang thanh cong!" << endl;
		cout << "===============================" << endl;
	}
	void ManageCustomer::DeleteCustomer()
	{
		int id;
		cout << "Nhap ma cong to muon xoa: ";
		cin >> id;
		for (int i = 0; i < Cus.size(); i++)
		{
			if (Cus[i]->getid() == id)
			{
				delete Cus[i];
				Cus.erase(Cus.begin() + i);
				cout << "Xoa thong tin khach hang thanh cong!" << endl;
				cout << "===============================" << endl;
				break;
			}
		}
	}
	void ManageCustomer::Fixinfor()
	{
		int id;
		int choose;
		string newname;
		int newnumadd;
		int newid;
		cout << "Nhap ma cong to muon sua: ";
		cin >> id;
		for (int i = 0; i < Cus.size(); i++)
		{
			if (Cus[i]->getid() == id)
			{
			redo:;
				cout << "Chon thong tin muon sua: " << endl;
				cout << "Enter 5: Fix name" << endl;
				cout << "Enter 6: Fix Number Address" << endl;
				cout << "Enter 7: Fix ID " << endl;
				cout << "Enter 0: Exit!" << endl;
				cout << "Please select: ";
				cin >> choose;
				switch (choose)
				{
				case FIX_NAME:
					cout << "Nhap ten moi: ";
					cin >> newname;
					Cus[i]->setname(newname);
					cout << "Sua thong tin thanh cong!" << endl;
					cout << "===============================" << endl;
					break;
				case FIX_NUMBERADDRESS:
					cout << "Nhap so nha moi: ";
					cin >> newnumadd;
					Cus[i]->setnumberadd(newnumadd);
					cout << "Sua thong tin thanh cong!" << endl;
					cout << "===============================" << endl;
					break;
				case FIX_ID:
					cout << "Nhap ma cong to moi: ";
					cin >> newid;
					Cus[i]->setid(newid);
					cout << "Sua thong tin thanh cong!" << endl;
					cout << "===============================" << endl;
					break;
				case EXIT:
					break;
				default:
					cout << "Not Valid. Try again!" << endl;
					cout << "===============================" << endl;
					goto redo;
				}

			}
		}
	}
