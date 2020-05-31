#include "Programmer.h"

Programmer::Programmer() : Engineer()
{
}

Programmer::Programmer(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution)
{
	this->id = id;
	this->name = name;
	this->base = base;
	this->project = project;
	this->worktime = worktime;
	this->budget = budget;
	this->contribution = contribution;
	setPayment();
}

void Programmer::setPayment()
{
	this->payment = (getWorkTime(this->worktime, this->base) + getPayment(budget, contribution));
}
