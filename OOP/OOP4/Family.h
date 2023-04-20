#pragma once
#include "Member.h"

class Family
{
private:
	int NumberMember;
	int Address;
	vector <Member> ListMember;
public:
	Family();
	
	Family(int SoTV, int Add, vector<Member> DsTV);
	
	int getNumMember();
	
	int getAddress();
	
	void setNumMember(int SoTV);
	
	void setAddress(int Add);

	void DisplayMember();

	void AddMember();

	~Family();
	
};
