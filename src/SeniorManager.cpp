#include "SeniorManager.h"

SeniorManager::SeniorManager() : ProjectManager()
{
	this->numprojects = 0;
}

SeniorManager::SeniorManager(int id, const std::string &name, int numprojects, double contribution, int salary)
{
	this->id = id;
	this->name = name;
	this->numprojects = numprojects;
	this->salary = salary;
	this->worktime = 0;
	this->contribution = contribution;
	setPayment();
}

int SeniorManager::getPayment(int whole_budget, double contribution)
{
	int payment = static_cast<int>(whole_budget) * this->contribution * this->numprojects;
	return payment;
}

void SeniorManager::setPayment()
{
	this->payment = (getPayment(1000, this->contribution) + getHeadingPayment(this->salary));
}

