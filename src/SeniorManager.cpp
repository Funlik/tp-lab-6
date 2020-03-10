#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, std::string FIO, std::string position, double worktime, double part, Projects* project, int under) :
	ProjectManager(id, FIO, position, worktime, part, project, under)
{
	this->payment += PaymentHeading(under, project);
}

int SeniorManager::PaymentHeading(int under, Projects* project)
{
	int count = 0;
	for (Employee* emp : project->GetEmployees())
	{
		if (emp->GetPosition() == "projectManager")
			count++;
	}
	return under * count;
}