#pragma once

#include <string>
#include "Interfaces.h"
#include "Employee.h"
#include "Project.h"
#include <vector>

class Manager : public Employee, public IProject
{
protected:
	Project * project;
	int projectContribution;
public:
	Manager(
		int id,
		std::string name,
		Project * project,
		int projectContribution
	);

	virtual int CalculateWage() = 0;
	int CalculateProjectWage() override;
	
	~Manager() {};
};

class ProjectManager : public Manager, public IHeading
{
private:
	int subordinatesNumber;
	int headingWage;
public:
	ProjectManager(
		int id,
		std::string name,
		Project * project,
		int projectContribution,
		int subordinatesNumber,
		int headingWage
	);

	int CalculateHeadingWage() override;
	int CalculateWage() override;

	~ProjectManager() {};
};

class SeniorManager : public ProjectManager
{
private:
	std::vector<Project *> projects;
public:
	SeniorManager(
		int id,
		std::string name,
		std::vector<Project *> projects,
		int projectContribution,
		int subordinatesNumber,
		int headingWage
	);

	int CalculateProjectsWage();
	int CalculateWage() override;

	~SeniorManager() {};
};