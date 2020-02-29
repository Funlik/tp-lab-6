#include "Personal.h"

Personal::Personal(int id, std::string name, int worktime, int base) : Employee(id, name, worktime)
{
	this->base = base;
}

int Personal::calculateWorkTimePayment()
{
	return this->worktime * this->base;
}

void Personal::Calc()
{
	this->payment = calculateWorkTimePayment();
}

int Personal::getBase()
{
	return this->base;
}

void Personal::setBase(int base)
{
	this->base = base;
}