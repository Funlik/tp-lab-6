#include "ProjectManager.h"

ProjectManager::ProjectManager() : Manager()
{
	this->salary = 0;
}

ProjectManager::ProjectManager(int id, const std::string &name, const std::string &project, int budget, double contribution, int salary)
{
	this->id = id;
	this->name = name;
	this->project = project;
	this->salary = salary;
	this->budget = budget;
	this->contribution = contribution;
	this->worktime = 0;
	setPayment();
}

void ProjectManager::setPayment()
{
	this->payment = (getPayment(this->budget, this->contribution) + getHeadingPayment(this->salary));
}

int ProjectManager::getHeadingPayment(int salary)
{
	return salary * 1000;
}

