#pragma once
#include "Card.h"
#include "Student.h"

class ManageCard

{
	vector <Card*> ListCard;
public:
	ManageCard();
	
	void AddCard();

	void DeleleCard();

	void showinfor();

};
