#include "Engineer.h"

Engineer::Engineer(int id, std::string FIO, std::string position, double worktime, int money, double part, Projects* project) : 
			Employee(id, FIO, position, worktime, project)
{
	this->payment += PaymentWorkTime(worktime, money) + PaymentProject(part);
}

double Engineer::PaymentWorkTime(double worktime, int money)
{
	return worktime * money;
}

double Engineer::PaymentProject(double part)
{
	return this->project->GetBudget() * part;
}