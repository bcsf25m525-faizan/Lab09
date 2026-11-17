#include "Project.h"
Project::Project(int id, const CharString& pd)
{
	ID = id;
	projectDescription.CopyFrom(pd);
	employeeCount = 0;
}
void Project::displayProjectInfo()
{
	cout << "Project ID: " << ID
		<< ", Project Employees Count: " << employeeCount
		<< ", ProjectDescription: ";
	projectDescription.print();
	cout << '\n';
}
void Project::IncEmployeeCount()
{
	employeeCount++;
}
void Project::operator=(const Project& p)
{
	this->ID = p.ID;
	this->employeeCount = p.employeeCount;
	this->projectDescription.CopyFrom(p.projectDescription);
}