#pragma once
#include "CharString.h"
#include "Address.h"
#include "Project.h"
#include "Employee.h"
#include <iostream>
class Department
{
	int ID;
	CharString name;
	Employee* employee[50];
	int employeeCount;
public:
	Department(int ID = 0, const CharString& name = "\0");
	void displayDeptInfo();
	bool AddEmployees(Employee* emp);
	bool RemoveEmployee(int employeeID);
	void DisplayAllEmployees();
};

