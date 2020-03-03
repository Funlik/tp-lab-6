#include "Tester.h"

Tester::Tester() : Engineer()
{
}

Tester::Tester(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution)
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

void Tester::setPayment()
{
	this->payment = (getWorkTime(this->worktime, this->base) + getPayment(this->budget, this->contribution));
}
