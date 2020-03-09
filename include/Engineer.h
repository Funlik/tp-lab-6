#pragma once

#include "Interfaces.h"
#include "Employee.h"
#include "Project.h"

class Engineer : public Employee, public IWorkTime, public IProject
{
protected:
	int hourlyWage;
	Project * project;
	int projectContribution;
public:
	Engineer(
		int id,
		std::string name,
		int hourlyWage,
		Project * project,
		int projectContribution
	);

	virtual int CalculateWage() = 0;
	virtual int CalculateBaseWage() override;
	virtual int CalculateProjectWage() override;

	~Engineer() {};
};

class Programmer : public Engineer
{
public:
	Programmer(
		int id,
		std::string name,
		int hourlyWage,
		Project * project,
		int projectContribution
	);

	int CalculateWage() override;

	~Programmer() {};
};

class Tester : public Engineer
{
private:
	int extraWage;
public:
	Tester(
		int id,
		std::string name,
		int hourlyWage,
		Project * project,
		int projectContribution,
		int extraWage
	);

	int CalculateWage() override;

	~Tester() {};
};

class TeamLeader : public Programmer, public IHeading
{
private:
	int subordinatesNumber;
	int headingWage;
public:
	TeamLeader(
		int id,
		std::string name,
		int hourlyWage,
		Project * project,
		int projectContribution,
		int subordinatesNumber,
		int headingWage
	);

	int CalculateHeadingWage() override;
	int CalculateWage() override;

	~TeamLeader() {};
};