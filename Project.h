#pragma once
#include "CharString.h"
#include <iostream>
class Project
{
	int ID;
	int employeeCount;
	CharString projectDescription;
public:
	Project(int id = 0, const CharString& pd = "DefaultDesc");
	void displayProjectInfo();
	void IncEmployeeCount();
	void operator=(const Project& p);
};

