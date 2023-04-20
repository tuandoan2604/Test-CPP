#pragma once
#include "Files.h"
#include "Books.h"
#include "Magazines.h"
#include "Newspapers.h"

class ManageFiles
{
private:
	vector<Files*> F;

public:

	ManageFiles();

	ManageFiles(vector <Files*> F);
	
	void addbook();

	void addmagazine();

	void addnews();
	
	void deleteID();
	
	void displayinfor();

	void lookingfor();

	~ManageFiles();
	
};
