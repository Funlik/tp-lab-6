#include "Employee.h"

Employee::Employee(int id, std::string FIO, std::string position, double worktime, Projects* project)
{
	this->id = id;
	this->FIO = FIO;
	this->position = position;
	this->project = project;
	this->worktime = worktime;
}

std::string Employee::GetPosition()
{
	return this->position;
}

void Employee::GetAllInformation()
{
	if (this->project == NULL)
		std::cout << this->id << ": " << this->FIO << " - " << this->position << ": " << this->payment << 
																	"/" << this->worktime << std::endl;
	else
		std::cout << this->id << ": " << this->FIO << " - " << this->position << ": " << this->payment << 
						"/" << this->worktime << " (" << this->project->GetTitle() << ")" << std::endl;
}