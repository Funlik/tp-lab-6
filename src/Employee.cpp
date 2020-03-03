#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(int id, const std::string &name, int worktime, int payment)
{
	this->id = id;
	this->name = name;
	this->worktime = worktime;
}

void Employee::SetId(int id)
{
	this->id = id;
}

void Employee::SetFio(const std::string &name)
{
	this->name = name;
}

void Employee::SetWorkTime(int worktime)
{
	this->worktime = worktime;
}

int Employee::getId()
{
	return id;
}

std::string Employee::getFio()
{
	return name;
}

int Employee::getWorkTime()
{
	return worktime;
}

int Employee::getPayment()
{
	return payment;
}
