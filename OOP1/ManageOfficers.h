#pragma once
#include "Officers.h"
#include "Workers.h"
#include "Engineers.h"
#include "Staffs.h"

class ManageOfficers
{
private:
	vector <Officers*> ListOfficers;
public:
	ManageOfficers();
	
	void AddWorkers();
	
	void AddEngineers();
	
	void AddStaffs();
	
	void searchbyname();
	
	void showinfordscb();

	~ManageOfficers();
};
