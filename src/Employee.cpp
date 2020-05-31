#include "Employee.h"

Employee::Employee(unsigned int id, string name)
{
	this->id = id;
	this->name = name;
}

void Employee::setWorktime(unsigned int worktime)
{
	this->worktime = worktime;
}