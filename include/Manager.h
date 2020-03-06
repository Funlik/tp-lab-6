#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee, public Heading, public Project {
protected:
	string project;
	float budget;
	float share;
	unsigned int staffCount;
public:
	Manager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount);
	virtual float heading_payment() = 0;
	virtual float project_payment();
	virtual void calc();
	float getBudget();
};

class ProjectManager : public Manager {
public:
	ProjectManager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount);
	virtual float heading_payment();
};


class SeniorManager : public ProjectManager {
public:
	SeniorManager(unsigned int id, string name, string project, float budget, float share, unsigned int staffCount);
	float heading_payment();
};

#endif