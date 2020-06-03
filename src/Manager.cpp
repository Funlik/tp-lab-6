#include <string>
#include <vector>
#include "Manager.h"

//Manager

Manager::Manager(int id, std::string name, Project * project, int projectContribution)
	: Employee(id, name)
{
	this->project = project;
	this->projectContribution = projectContribution;
}

int Manager::CalculateProjectWage()
{
	return int(projectContribution * double(project->GetBudget()) / 100);
}

//ProjectManager

ProjectManager::ProjectManager(int id, std::string name, Project * project, int projectContribution, int subordinatesNumber, int headingWage)
	: Manager(id, name, project, projectContribution)
{
	this->subordinatesNumber = subordinatesNumber;
	this->headingWage = headingWage;
}

int ProjectManager::CalculateHeadingWage()
{
	return headingWage * subordinatesNumber;
}

int ProjectManager::CalculateWage()
{
	wage = CalculateProjectWage() + CalculateHeadingWage();
	return wage;
}

//SeniorManager

SeniorManager::SeniorManager(int id, std::string name, std::vector<Project *> projects,
	int projectContribution, int subordinatesNumber, int headingWage)
	: ProjectManager(id, name, nullptr, projectContribution, subordinatesNumber, headingWage)
{
	this->projects = projects;
}

int SeniorManager::CalculateProjectsWage()
{
	int wage = 0;
	for (auto & project : projects)
		wage += int(projectContribution * double(project->GetBudget()) / 100);
	return wage;
}

int SeniorManager::CalculateWage()
{
	wage = CalculateHeadingWage() + CalculateProjectsWage();
	return wage;
}