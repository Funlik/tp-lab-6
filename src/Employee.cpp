#include "Employee.h"

Employee::Employee(int id, std::string name, int worktime)
{
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	this->rate = 0;
}

int Employee::getID()
{
	return this->id;
}

void Employee::setID(int id)
{
	this->id = id;
}

std::string Employee::getName()
{
	return this->name;
}

void Employee::setName(std::string name)
{
	this->name = name;
}

int Employee::getWorktime()
{
	return this->worktime;
}

void Employee::setWorktime(int worktime)
{
	if (worktime >= 0)
	{
		this->worktime = worktime;
	}
}

int Employee::getRate()
{
	return this->rate;
}

double Employee::calc() {}		// is needed?