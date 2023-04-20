#include "ManageFiles.h"

ManageFiles::ManageFiles()
{}

ManageFiles::ManageFiles(vector <Files*> F) 
{
	this->F = F;
}
	void ManageFiles::addbook()
	{
		int ID;
		string publisher;
		int numpub;
		string author;
		int numpage;
		cout << "Nhap ma ID: ";
		cin >> ID;
		cout << "Nhap ten nha phat hanh: ";
		cin >> publisher;
		cout << "Nhap so luong phat hanh: ";
		cin >> numpub;
		cout << "Nhap ten tac gia: ";
		cin >> author;
		cout << "Nhap so trang: ";
		cin >> numpage;
		Files* F1 = new Books(ID, publisher, numpub, author, numpage);
		F.push_back(F1);
	}
	void ManageFiles::addmagazine()
	{
		int ID;
		string publisher;
		int numpub;
		int numrel;
		int monthrel;
		cout << "Nhap ma ID: ";
		cin >> ID;
		cout << "Nhap ten nha phat hanh: ";
		cin >> publisher;
		cout << "Nhap so luong phat hanh: ";
		cin >> numpub;
		cout << "Nhap so phat hanh: ";
		cin >> numrel;
		cout << "Nhap thang phat hanh: ";
		cin >> monthrel;
		Files* F2 = new Magazines(ID, publisher, numpub, numrel, monthrel);
		F.push_back(F2);
	}
	void ManageFiles::addnews()
	{
		int ID;
		string publisher;
		int numpub;
		int dayrel;
		cout << "Nhap ma ID: ";
		cin >> ID;
		cout << "Nhap ten nha phat hanh: ";
		cin >> publisher;
		cout << "Nhap so luong phat hanh: ";
		cin >> numpub;
		cout << "Nhap ngay phat hanh: ";
		cin >> dayrel;
		Files* F3 = new Newspapers(ID, publisher, numpub, dayrel);
		F.push_back(F3);
	}

	void ManageFiles::deleteID()
	{
		int IDdel;
		cout << "Nhap ma ID File can xoa: ";
		cin >> IDdel;
		for (int i = 0; i < F.size(); i++)
		{
			if (F[i]->getID() == IDdel)
			{
				delete F[i];
				F.erase(F.begin() + i);
				cout << "Xoa thanh cong ID " << IDdel << endl;
				break;
			}
		}
	}
	void ManageFiles::displayinfor()
	{
		for (int i = 0; i < F.size(); i++)
		{
			cout << "Thong tin File thu " << i + 1 << ":" << endl;
			F[i]->display();
			cout << "=============================" << endl;
		}
	}
	void ManageFiles::lookingfor()
	{
		int IDSearch;
		cout << "Nhap ID muon tim kiem: ";
		cin >> IDSearch;
		for (int i = 0; i < F.size(); i++)
		{
			if (F[i]->getID() == IDSearch)
			{
				cout << "Thong tin tim kiem la: " << endl;
				F[i]->display();
				cout << "=============================" << endl;
				break;
			}
		}
	}
	ManageFiles::~ManageFiles()
	{}