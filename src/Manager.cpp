#include "Manager.h";

Manager::Manager(int id, std::string name, double worktime, double payment) : Employee(id, name, worktime) 
{
	this->percent = percent;
}

double Manager::getPercent()
{
	return this->percent;
}

void Manager::setPercent(int p)
{
	this->percent = p;
}

double Manager::calculateProjectPayment(double percent, double budget)
{
	return percent * 0.01 * budget;
}

void Manager::calcPayment(double percent, double budget)
{
	this->payment = calculateProjectPayment(percent, budget);
}
