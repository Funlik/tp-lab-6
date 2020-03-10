#include "Projects.h"

Projects::Projects(std::string title, int budget)
{
	this->title = title;
	this->budget = budget;
}

std::string Projects::GetTitle()
{
	return this->title;
}

int Projects::GetBudget()
{
	return this->budget;
}

void Projects::AddEmployee(Employee* emp)
{
	this->employees.push_back(emp);
}

std::vector <Employee*> Projects::GetEmployees()
{
	return this->employees;
}

void Projects::ShowAllInformation()
{
	std::cout << this->GetTitle() << ": " << this->GetBudget() << std::endl;
}