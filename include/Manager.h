#pragma once
#include"Employee.h"
#include"Interfaces.h"



using namespace std;

class Manager : public Employee, Project
{
public:
	Manager(int id, string name, string project, double share, double prjBudget) 
		: Employee::Employee(id, name), project{ project }, share{ share }, prjBudget{prjBudget}{}
	double calcPR(double share, double prjBudget);
	void calc() { payment = calcPR(share, prjBudget); }
	void print_inf();
protected:
	double prjBudget;
	double share;
	string project;
};


class ProjectManager : public Manager, Heading
{
public:
	void print_inf();
	ProjectManager(int id, string name, string project, double share, double prjBudget, int subNum)
		: Manager::Manager(id, name, project, share, prjBudget),  subNum{ subNum } {}
	double calcPR(double share, double prjBudget);
	double calcHD(int subNum);
	void calc() { payment = calcPR(share, prjBudget) + calcHD(subNum); }
	
protected:
	int subNum;
};


class SeniorManager : public ProjectManager
{
public:
	void print_inf();
	using ProjectManager::calcPR;
	using ProjectManager::ProjectManager;
	using ProjectManager::print_inf;
	double calcHD(int subNum);
};