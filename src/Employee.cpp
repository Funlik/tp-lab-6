#include <string>
#include "Employee.h"

Employee::Employee(int id, std::string name)
{
	this->id = id;
	this->name = name;
	this->wage = 0;
	this->worktime = 0;
}

void Employee::SetWorktime(int worktime)
{
	this->worktime = worktime;
}

int Employee::GetId() const 
{
	return id;
}

std::string Employee::GetName() const 
{
	return name;
}

int Employee::GetWage() const 
{
	return wage;
}