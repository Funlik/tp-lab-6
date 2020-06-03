#include "Engineer.h"

//Engineer

Engineer::Engineer(int id, std::string name, int hourlyWage, Project * project, int projectContribution) 
	: Employee(id, name)
{
	this->hourlyWage = hourlyWage;
	this->project = project;
	this->projectContribution = projectContribution;
}

int Engineer::CalculateBaseWage()
{
	return worktime * hourlyWage;
}

int Engineer::CalculateProjectWage()
{
	return int(projectContribution * double(project->GetBudget()) / 100);
}

//Programmer

Programmer::Programmer(int id, std::string name, int hourlyWage, Project * project, int projectContribution)
	:Engineer(id, name, hourlyWage, project, projectContribution) {}

int Programmer::CalculateWage()
{
	wage = CalculateBaseWage() + CalculateProjectWage();
	return wage;
}

//Tester

Tester::Tester(int id, std::string name, int hourlyWage, Project * project, int projectContribution, int extraWage)
	: Engineer(id, name, hourlyWage, project, projectContribution) 
{
	this->extraWage = extraWage;
}

int Tester::CalculateWage()
{
	wage = CalculateBaseWage() + CalculateProjectWage() + extraWage;
	return wage;
}

//TeamLeader

TeamLeader::TeamLeader(int id, std::string name, int hourlyWage, Project * project, int projectContribution, int subordinatesNumber, int headingWage)
	: Programmer(id, name, hourlyWage, project, projectContribution)
{
	this->subordinatesNumber = subordinatesNumber;
	this->headingWage = headingWage;
}

int TeamLeader::CalculateHeadingWage()
{
	return headingWage * subordinatesNumber;
}

int TeamLeader::CalculateWage()
{
	wage = CalculateBaseWage() + CalculateProjectWage() + CalculateHeadingWage();
	return wage;
}