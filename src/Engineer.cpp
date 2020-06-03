#include "Engineer.h"



Engineer::Engineer(string fio, int id, int workTime, int payment, Project* project, int partOfProject) : Employee(fio, id, payment)
{
	this->workTime = workTime;
	this->project = project;
	this->partOfProject = partOfProject;
}


Engineer::Engineer(string fio, int id, int workTime, int payment, int partOfProject) : Employee(fio, id, payment)
{
	this->workTime = workTime;
	this->project = project;
	this->partOfProject = partOfProject;
	this->project = 0;
}


Engineer::~Engineer()
{
}

Project* Engineer::getProject()
{
	return this->project;
}

int Engineer::getWorkTime()
{
	return workTime;
}




void Engineer::setProject(Project* project)
{
	this->project = project;
}

void Engineer::setPartOfProject(int partOfProject)
{
	this->partOfProject = partOfProject;
}
int Engineer::getSalaryByWorkTime()
{
	return workTime*payment;
}

int Engineer::getSalary() 
{
	return getSalaryByWorkTime();
}

void Engineer::serWorkTime(int workTime)
{
	this->workTime = workTime;
}


int Engineer::getPartOfProject()
{
	return partOfProject;
}