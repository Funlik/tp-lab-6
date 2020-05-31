#include "Engineer.h"

Engineer::Engineer() : Employee()
{
}

int Engineer::getPayment(int budget, double contribution)
{
	int bonus = static_cast<int>(budget) * contribution;
	return bonus;
}

int Engineer::getWorkTime(int worktime, int base)
{
	int payment = worktime * base;
	return payment;
}

void Engineer::setBase(int base)
{
	this->base = base;
}

int Engineer::getBase()
{
	return base;
}

void Engineer::setContribution(double contribution)
{
	this->contribution = contribution;
}

double Engineer::getContriution()
{
	return contribution;
}

void Engineer::setProject(const std::string &project)
{
	this->project = project;
}

std::string Engineer::getProject()
{
	return project;
}
