#pragma once
#include "CharString.h"
#include "Address.h"
#include "Project.h"
#include <iostream>
class Employee
{
	int ID;
	CharString name;
	Address permanentAddr;
	bool assignedToDept;
	Project* project[3];
	int projectCount;
public:
	Employee();
	Employee(int id, CharString na, Address pa);
	void displayEmployeeInfo();
	bool AddProject(Project* proj);
	bool RemoveProject(int pID);
	void displayAllProjects();
	void SetAssignedToDept(bool value);
	void operator=(const Employee& emp);
};

