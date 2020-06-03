#include "ProjectManager.h"
#include <iostream>

ProjectManager::ProjectManager(string fio, int id, int workTime, int payment, Project* project, int partOfProject): Engineer(fio, id, workTime, payment, project, partOfProject)
{
}


ProjectManager::~ProjectManager()
{
}

int ProjectManager::getSalaryByHeading()
{
	return payment * project->getCompletePart() / 100;
}

int ProjectManager::getSalary()
{
	return getSalaryByHeading() + getSalaryByWorkTime();
}
void ProjectManager::print()
{
	cout << "hello";
}