#include "Family.h"


	Family::Family()
	{}
	Family::Family(int SoTV, int Add, vector<Member> DsTV) : NumberMember(SoTV), Address(Add), ListMember(DsTV)
	{}
	int Family::getNumMember()
	{
		return NumberMember;
	}
	int Family::getAddress()
	{
		return Address;
	}
	void Family::setNumMember(int SoTV)
	{
		this->NumberMember = SoTV;
	}
	void Family::setAddress(int Add)
	{
		this->Address = Add;
	}
	void Family::DisplayMember()
	{
		for (int j = 0; j < ListMember.size(); j++)
		{
			cout << "Thong tin TV thu " << j + 1 << " trong gia dinh: " << endl;
			ListMember[j].displayInfor();
		}
	}
	void Family::AddMember()
	{
		for (int i = 0; i < NumberMember; i++)
		{
			Member n;
			string name;
			int age;
			string job;
			int cccd;
			cout << "Nhap thong tin thanh vien thu: " << i + 1 << ":" << endl;
			cout << "Name: ";
			cin >> name;
			n.setname(name);
			cout << "Age: ";
			cin >> age;
			n.setage(age);
			cout << "Job: ";
			cin >> job;
			n.setjob(job);
			cout << "CCCD: ";
			cin >> cccd;
			n.setcccd(cccd);
			ListMember.push_back(n);
		}
	}
	Family::~Family()
	{}