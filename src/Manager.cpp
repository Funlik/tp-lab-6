#include "Manager.h"

Manager::Manager(int id, std::string name, int worktime, int percent) : Employee(id, name, worktime)
{
	this->percent = percent;
}

int Manager::getPercent(int percent)
{
	return this->percent;
}

void Manager::setPercent(int percent)
{
	this->percent = percent;
}

double Manager::calculateProjectPayment(int budget, int percent)
{
	return percent * budget / 100;
}

double Manager::calc() {}

double Manager::calc(int budget, int percent)
{
	this->rate = calculateProjectPayment(budget, percent);
}