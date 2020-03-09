#include "Manager.h"



Manager::Manager(string fio, int id, int payment):Employee(fio,id, payment)
{
}


Manager::~Manager()
{
}

vector <Project*>  Manager::getProjects()
{
	return projects;
}

void Manager::addProject(Project* project)
{
	projects.push_back(project);
}

int Manager::getSalaryByHeading()
{
	int salary = 0;
	
	for (Project* pr : projects)
	{
		salary += payment * pr->getCompletePart();
	}

	return  salary;
}

int Manager::getSalary()
{
	return getSalaryByHeading();
}
