#include "Department.h"
Department::Department(int ID, const CharString& name)
{
	this->ID = ID;
	this->name.CopyFrom(name);
	employeeCount = 0;
}
void Department::displayDeptInfo()
{
	cout << "ID: " << ID;
	cout << "\nName: ";
	name.print();
	cout << "\nEmployee Count: " << employeeCount << '\n';
	for (int i = 0; i < employeeCount; ++i)
	{
		cout << "Project " << i + 1 << " info:\n";
		employee[i]->displayEmployeeInfo();
	}
}
bool Department::AddEmployees(Employee* emp)
{
	if (employeeCount >= 50)
	{
		cout << "Cannot assign more than 50 employees.\n";
		return false;
	}
	this->employee[employeeCount++] = emp;
	return 1;
}
bool Department::RemoveEmployee(int employeeID)
{
	if (!employeeCount) {
		cout << "Department has no employees.\n";
		return 0;
	}
	for (int i = 0; i < employeeCount; ++i)
	{
		if (this->ID == employeeID)
		{
			for (int j = i; j < employeeCount - 1; ++j)
			{
				employee[j] = employee[j + 1];
			}
			this->employee[employeeCount - 1] = nullptr;
			employeeCount--;
			return 1;
		}
	}
	cout << "Employee with the required ID not found.\n";
	return 0;
}
void Department::DisplayAllEmployees()
{
	cout << "ID: " << ID
		<< "\nName: ";
	name.print();
	cout << "\nEmployee Count: " << employeeCount << '\n';
}