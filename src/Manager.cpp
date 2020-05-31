#include "Manager.h"

Manager::Manager(int id, std::string name, int worktime, int percent) : Employee(id, name, worktime)
{
	this->percent = percent;
}

int Manager::getPercent()
{
	return this->percent;
}

void Manager::setPercent(int target)
{
	this->percent = target;
}

int Manager::calculateProjectPayment(int percent, int budget)
{
	return percent * budget / 100;
}

void Manager::Calc()
{
	// this function is not supported for managers
	// please, use Calc(int percent, int budget)
	return;
}

void Manager::Calc(int percent, int budget)
{
	this->payment = calculateProjectPayment(percent, budget);
}