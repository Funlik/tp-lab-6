#include "Personal.h"

Personal::Personal(int ID, string name, int worktime, int base) : Employee(ID, name, worktime) 
{
	this->base = base;
}

int Personal::calcWTPayment()
{
	return (this->worktime * this->base);
}

void Personal::calcPayment() 
{
	this->payment = calcWTPayment();
}

int Personal::getBase() 
{
	return this->base;
}

void Personal::changeBase(int newBase) 
{
	this->base = newBase;
}


Cleaner::Cleaner(int ID, string name, int worktime, int base) : Personal(ID, name, worktime, base) 
{
}


Driver::Driver(int ID, string name, int worktime, int base) : Personal(ID, name, worktime, base) 
{
}