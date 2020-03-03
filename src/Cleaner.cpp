#include "Cleaner.h"

Cleaner::Cleaner(int id, const std::string &name, int worktime, int base)
{
	this->id = id;
	this->name = name;
	this->base = base;
	this->worktime = worktime;
	setPayment();
}

int Cleaner::getWorkTime(int worktime, int base)
{
	this->payment = worktime * base;
	return payment;
}

void Cleaner::setPayment()
{
	this->payment = getWorkTime(this->worktime, this->base);
}
