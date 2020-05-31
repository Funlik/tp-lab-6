#include "Engineer.h"

Engineer::Engineer(int id, std::string name, int worktime, int base) : Employee(id, name, worktime)
{
	this->base = base;
}

int Engineer::calculateWorkTimePayment()
{
	return worktime * base;
}

int Engineer::calculateProjectPayment(int percent, int budget)
{
	return percent * budget / 100;
}

void Engineer::Calc() 
{
	// this function is not supported for engineers
	// please, use Calc(int percent, int budget)
	return;
}

void Engineer::Calc(int percent, int budget)
{
	this->payment = calculateWorkTimePayment() + calculateProjectPayment(percent, budget);
}