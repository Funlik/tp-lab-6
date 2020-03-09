#include <string>
#include <vector>
#include <iostream>
#include "Personal.h"
#include "Engineer.h"
#include "Project.h"
#include "Manager.h"
#include "Factory.h"

int main()
{
	std::vector<Employee *> employees;
	employees = parseEmployeeList("employees.txt");

	for (auto & employee : employees)
	{
		employee->SetWorktime(40);
		std::cout << employee->GetName() << '\t';
		std::cout << employee->CalculateWage() << std::endl;
	}
}