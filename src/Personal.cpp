#include "Personal.h"

Personal::Personal(int id, std::string name, int worktime, int baseRate) : Employee(id, name, worktime)
{
	this->baseRate = baseRate;
}

int Personal::calculateWorktimePayment()
{
	return this->worktime * this->baseRate;
}

double Personal::calc()
{
	this->rate = calculateWorktimePayment();
}

int Personal::getBaseRate()
{
	return this->baseRate;
}

void Personal::setBaseRate(int baseRate)
{
	this->baseRate = baseRate;
}