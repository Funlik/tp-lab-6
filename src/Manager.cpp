#include "Manager.h"

Manager::Manager()
{
	this->contribution = 0;
	this->budget = 0;
	this->project = "";
}

Manager::Manager(int id, const std::string &name, const std::string &project, int budget, double contribution)
{
	this->id = id;
	this->name = name;
	this->project = project;
	this->budget = budget;
	this->worktime = 0;
	this->contribution = contribution;
	setPayment();
}

void Manager::setPayment()
{
	this->payment = getPayment(this->budget, this->contribution);
}

int Manager::getPayment(int budget, double contribution)
{
	int pay = static_cast<int>(budget) * contribution;
	return pay;
}

void Manager::setContribution(double contribution)
{
	this->contribution = contribution;
}

double Manager::getContriution()
{
	return contribution;
}

void Manager::setProject(const std::string &project)
{
	this->project = project;
}

std::string Manager::getProject()
{
	return project;
}

