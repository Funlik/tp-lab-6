#include "TeamLeader.h"

TeamLeader::TeamLeader() : Programmer()
{
	this->salary = 0;
}

TeamLeader::TeamLeader(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution, int salary)
{
	this->id = id;
	this->name = name;
	this->base = base;
	this->project = project;
	this->salary = salary;
	this->worktime = worktime;
	this->budget = budget;
	this->contribution = contribution;
	setPayment();
}

int TeamLeader::getHeadingPayment(int salary)
{
	int pay = salary * 100;
	return pay;
}

void TeamLeader::setPayment()
{
	this->payment = (getWorkTime(this->worktime, this->base) + getPayment(budget, contribution) + getHeadingPayment(salary));
}
