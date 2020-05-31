#include "Driver.h"

Driver::Driver(int id, const std::string &name, int worktime, int base)
{
	this->id = id;
	this->name = name;
	this->base = base;
	this->worktime = worktime;
	setPayment();
}

int Driver::getWorkTime(int worktime, int base)
{
	this->payment = worktime * base;
	return payment;
}

void Driver::setPayment()
{
	this->payment = getWorkTime(this->worktime, this->base);
}
