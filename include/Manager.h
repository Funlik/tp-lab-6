#pragma once
#include "Employee.h"

class Manager : public Employee, public Project {
protected:
	string project;
	float contribution;
public:
	Manager(int id, string name, string project, float contribution);
	float project_salary() override;
	void set_payment() override;
};

class ProjectManager : public Heading, public Manager {
protected:
	int employeesNumber;
public:
	ProjectManager(int id, string name, string project, float contribution, int employeesNumber);
	float heading_salary() override;
	void set_payment() override;
};

class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, string name, string project, float contribution, int employeesNumber);
	void set_payment() override;
};
 