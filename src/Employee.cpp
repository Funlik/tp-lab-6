#include "Employee.h"

Employee::Employee(int id, std::string name, double worktime)
{
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	this->payment = 0;
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

void Employee::setWorktime(double worktime)
{
	this->worktime = worktime;
	
}

int Employee::getPayment()
{ 
	return this->payment;
}

void Employee::calcPayment()
{

}