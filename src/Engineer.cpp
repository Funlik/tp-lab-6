#include "Engineer.h"

Engineer::Engineer(int id, std::string name, double worktime, double payment) : Employee (id, name, worktime)
{
	this->payment = payment;
}

double Engineer::calcWorkTimePayment()
{
	return this->worktime * this->payment;	
}

double Engineer::calcProjectPayment(double percent, double payment)
{
	return percent * 0.01 * payment;
}

void Engineer::calcPayment(double percent, double payment)
{
	this->payment = calcWorkTimePayment() + calcProjectPayment(percent, payment);
}