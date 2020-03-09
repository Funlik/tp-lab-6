#pragma once
#include "Employee.h" 
#include <string>
using namespace std;

class Engineer :public Employee, public WorkTime, public Project {
protected:
	int base;
	double part;
	string project;
public:
	Engineer(int NewId, string NewName, int NewWorktime, int NewBase, double NewPart, string NewProject, int fund):Employee(NewId,NewName,NewWorktime),Project(fund)
	{
		this->base = NewBase;
		this->part = NewPart;
		this->project = NewProject;
	}
	int countByTime()
	{
		return worktime * base;
	}
	double countByProject()
	{
		return fund * part;
	}
	int getPayment()
	{
		payment = countByProject() + countByTime();
		return payment;
	}
};


class Programmer :public Engineer {
public:
	Programmer(int NewId, string NewName, int NewWorktime, int NewBase, double NewPart, string NewProject, int fund) :Engineer( NewId, NewName,NewWorktime, NewBase,  NewPart,  NewProject,  fund)
	{

	}
	int getPayment()
	{
		payment = countByProject() + countByTime();
		return payment;
	}
};


class Tester : public Engineer {
public:
	Tester(int NewId, string NewName, int NewWorktime, int NewBase, double NewPart, string NewProject, int fund) :Engineer(NewId, NewName, NewWorktime, NewBase, NewPart, NewProject, fund) {};
	int getPayment()
	{
		{
			payment = countByProject() + countByTime();
			return payment;
		}
	}
};

class TeamLeader :public Programmer, public Heading {
private:
	int people;
	int basepeople=50;
public:
	TeamLeader(int NewId, string NewName, int NewWorktime, int NewBase, double NewPart, string NewProg, int fund, int people) :Programmer(NewId, NewName, NewWorktime, NewBase, NewPart, NewProg, fund)
	{
		this->people = people;
	}
	int countByHeading()
	{
		return  people * basepeople;
	}
	int getPayment()
	{
		payment = Programmer::getPayment() + countByHeading();
		return payment;

	}
};