#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"

class Engineer : public Employee, public WorkTime, public Project {
protected:
	unsigned int base;
	string project;
	float budget;
	float share;
public:
	Engineer(unsigned int id, string name, unsigned int base, string project, float budget, float share);
	virtual float worktime_payment();
	virtual float project_payment();
	virtual void calc();
	float getBudget();
};

class Programmer : public Engineer {
public:
	Programmer(unsigned int id, string name, unsigned int base, string project, float budget, float share);
};

class Tester : public Engineer {
public:
	Tester(unsigned int id, string name, unsigned int base, string project, float budget, float share);
};

class TeamLeader : public Programmer, public Heading {
protected:
	unsigned int staffCount;
public:
	TeamLeader(unsigned int id, string name, unsigned int base, string project, float budget, float share, unsigned int staffCount);
	float heading_payment();
	void calc();
};

#endif