#include "Personal.h"

Personal::Personal(int id, std::string name, double worktime, double payment) : Employee(id, name, worktime)
{
	this->payment = payment;
}

double Personal::calcWorkTimePayment()
{
	return this->payment * this->worktime;
}

void Personal::calc()
{
	this->payment = calcWorkTimePayment();
}

double Personal::getPayment()
{
	return this->payment;
}

void Personal::setPayment(double payment)
{
	this->payment = payment;
}