#pragma once
#include"Employee.h"
#include"Interfaces.h"
using namespace std;

class Engineer : public Employee, WorkTime, Project
{
public:
	Engineer(int id, string name, string project, double share, double baseRate, double prjBudget)
		: Employee::Employee(id, name), project{ project }, share{ share },
		baseRate{ baseRate }, prjBudget{ prjBudget } {}
	double calcPR(double share, double prjBudget);
	double calcWT(double wt, double baseRate);
	void calc(){ payment = calcWT(worktime, baseRate) + calcPR(share, prjBudget); }
	void print_inf();
protected:
	double prjBudget;
	double baseRate;
	double share;
	string project;
};


class Tester : public Engineer
{
public:
	Tester(int id, string name, string project, double share, double baseRate, double prjBudget)
		: Engineer::Engineer(id, name, project, share, baseRate, prjBudget) {}
	Engineer::calcPR;
	double calcWT(double wt, double baseRate);
	void print_inf();
};


class Programmer : public Engineer
{
public:
	Programmer(int id, string name, string project, double share, double baseRate, double prjBudget)
		: Engineer::Engineer(id, name, project, share, baseRate, prjBudget) {}
	Engineer::calcPR;
	double calcWT(double wt, double baseRate);
	void print_inf();
};


class TeamLeader : public Programmer, Heading
{
public:
	TeamLeader(int id, string name, string project, double share, double baseRate, double prjBudget, int subNum)
		: Programmer(id, name, project, share, baseRate, prjBudget), subNum{ subNum }{ }
	double calcHD(int subNum);
	Programmer::calcPR;
	Programmer::calcWT;
	void calc() { payment = calcWT(worktime, baseRate) + calcPR(share, prjBudget) + calcHD(subNum);  }
	void print_inf();
protected:
	int subNum;
};