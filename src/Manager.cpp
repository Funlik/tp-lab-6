#include "Manager.h"
#include "Project1.h"

Manager::Manager(int id1, string name1)
{
	id = id1;
	name = name1;
	work_time = 0;
	project = NULL;
	deposit = 0;
	profession = "manager";
}

void Manager::add_project(Project* project1, int deposite1)
{
		this->project = project1;
		this->deposit = deposite1;
}

double Manager::PaymentProject()
{
	if (project != NULL) {
		double payment = deposit * (project->budget)/100;
		return payment;
	}
	else
	{
		return 0;
	}
}

double Manager::CalcPayment()
{
	double payment = PaymentProject();
	return payment;
}

void ProjectManager::add_project(Project* project1)
{
	this->project = project1;
	this->deposit = 0;
}

ProjectManager::ProjectManager(int id1, string name1, int work_time1, int countofperson1)
{
	id = id1;
	name = name1;
	work_time = work_time1;
	project = NULL;
	CountOfperson = countofperson1;
	profession = "projectmanager";
}

int ProjectManager::HeadingPayment()
{
	int payment = MoneyOfPerson * project->getsize();
	return payment;
}

double ProjectManager::CalcPayment()
{
	double payment = PaymentProject() + HeadingPayment();
	return payment;
}

SeniorManager::SeniorManager(int id1, string name1,int countofprojects1)
{
	id = id1;
	name = name1;
	CountOfProjects = countofprojects1;
	project = NULL;
	CountOfProjects = 0;
	profession = "seniormanager";
}

void SeniorManager::addcountofprojects(size_t k)
{
	CountOfProjects = k;
}

int SeniorManager::HeadingPayment()
{
	int payment = base * CountOfProjects;
	return payment;
}

double SeniorManager::CalcPayment()
{
	double payment = HeadingPayment();
	return payment;
}
