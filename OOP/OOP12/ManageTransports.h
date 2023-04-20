#pragma once
#include "Transports.h"
#include "Cars.h"
#include "Motorbikes.h"
#include  "Trucks.h"

class ManageTransports
{
	vector <Transports*> ListTrans;
public:
	ManageTransports();
	
	void AddMotorBike();

	void AddCar();

	void AddTruck();

	void DeleteID();

	void SearchbyBrand();

	void SearchbyColor();

};
