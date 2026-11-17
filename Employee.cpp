#include "Employee.h"
Employee::Employee()
{
	ID = 0;
	assignedToDept = 0;

	projectCount = 0;
}
Employee::Employee(int id, CharString na, Address pa)
{
	ID = id;
	name.CopyFrom(na);
	permanentAddr = pa;
	assignedToDept = 0;

	projectCount = 0;
}
void Employee::displayEmployeeInfo()
{
	cout << "ID: " << ID
		<< "\nName: ";
	name.print();
	cout << "\nAddress: ";
	permanentAddr.displayAddress();
	cout << "Assigned to any Department: " << assignedToDept;
	cout << "\nProjects Count: " << projectCount << '\n';
	/*for (int i = 0; i < projectCount; ++i)
	{
		cout << "Project " << i + 1 << " info:\n";
		project[i]->displayProjectInfo();
	}*/
}
bool Employee::AddProject(Project* proj)
{
	if (projectCount >= 3)
	{
		cout << "Cannot assign more than 3 projects.\n";
		return false;
	}
	this->project[projectCount++] = proj;
	return 1;
}
bool Employee::RemoveProject(int pID)
{
	if (!projectCount) {
		cout << "Employee has no projects assigned.\n";
		return 0;
	}
	for (int i = 0; i < projectCount; ++i)
	{
		if (this->ID == pID)
		{
			for (int j = i; j < projectCount - 1; ++j)
			{
				project[j] = project[j + 1];
			}
			this->project[projectCount - 1] = nullptr;
			projectCount--;
			return 1;
		}
	}
	cout << "Project with the required ID not found.\n";
	return 0;
}
void Employee::displayAllProjects()
{
	for (int i = 0; i < projectCount; ++i)
	{
		cout << "Project " << i + 1 << " info:\n";
		project[i]->displayProjectInfo();
	}
}
void Employee::SetAssignedToDept(bool value)
{
	this->assignedToDept = value;
}
void Employee::operator=(const Employee& emp)
{
	this->ID = emp.ID;
	this->name.CopyFrom(emp.name);
	this->permanentAddr = emp.permanentAddr;
	this->assignedToDept = emp.assignedToDept;
	this->projectCount = emp.projectCount;
	for (int i = 0; i < projectCount; ++i)
	{
		this->project[i] = emp.project[i];
	}
}