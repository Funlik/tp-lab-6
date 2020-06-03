#include "Employee.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"


Employee::Employee(int ID, string name, int worktime)
{
	this->ID = ID;
	this->name = name;
	this->worktime = worktime;
	this->payment = 0;
}

int Employee::getID()
{
	return this->ID;
}

void Employee::setID(int ID)
{
	this->ID = ID;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setName(string name)
{
	this->name = name;
}

int Employee::getWorktime()
{
	return this->worktime;
}

int Employee::getPayment()
{
	return this->payment;
}

void Employee::setWorktime(int worktime)
{
	this->worktime = worktime;
}

void Employee::setPayment(int payment)
{
	this->payment = payment;
}

void Employee::calcPayment()
{
}