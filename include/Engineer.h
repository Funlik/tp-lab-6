#pragma once
#include "Employee.h"

class Engineer : public WorkTime, public Employee, public Project {
protected:
	int base;
	float contribution; 
	string project;
public:
	Engineer(int id, string name, int worktime, int base, string project, float contribution);
	float worktime_salary() override;
	float project_salary() override;
	void set_payment() override;
};

class Programmer : public Engineer {
public: Programmer(int id, string name, int worktime, int base, string project, float contribution);
};

class Tester : public Engineer {
public: Tester(int id, string name, int worktime, int base,  string project, float contribution);
};

class TeamLeader : public Programmer, public Heading {
protected:
	int employeesNumber;
public:
	TeamLeader(int id, string name, int worktime, int base, string project, float contribution, int employeesNumber);
	float heading_salary() override;
	void set_payment() override;
};