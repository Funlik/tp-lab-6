#include "Manager.h"

int Manager::countManager;

Manager::Manager(int id, std::string FIO, std::string position, double worktime, double part, Projects* project) : 
			Employee(id, FIO, position, worktime, project)
{
	this->payment += PaymentProject(part);
	if (position == "manager")
		countManager++;
}

double Manager::PaymentProject(double part)
{
	return this->project->GetBudget() * part;
}