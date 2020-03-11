#include "Engineer.h"

Engineer::Engineer(int id, std::string name, int worktime, int baseRate) : Employee(id, name, worktime)
{
	this->baseRate = baseRate;
}

int Engineer::calculateWorktimePayment()
{
	return worktime * baseRate;
}

double Engineer::calculateProjectPayment(int budget, int percent)
{
	return percent * budget / 100;
}

void Engineer::calc() {}

void Engineer::calc(int budget, int percent)
{
	this->rate = calculateWorktimePayment() + calculateProjectPayment(percent, budget);
}