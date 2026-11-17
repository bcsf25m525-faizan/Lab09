#include <iostream>
#include "Address.h"
#include "Project.h"
#include "CharString.h"
#include "Department.h"

using namespace std;

int main()
{
	Department d1(2, "Computer Science");
	Address a1(10, 'Y', 4, "Gujranwala");
	Employee e1(5, "ALI", a1);
	d1.AddEmployees(&e1);
	d1.DisplayAllEmployees();
	e1.displayEmployeeInfo();

	return 0;
}