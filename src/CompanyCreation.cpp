#include "CompanyCreation.h"
#include "Heading.h"
#include "WorkTime.h"

#include<iostream>

Employee* CompanyCreation::addEmployee(int id, string post, string forename, int hoursWorked, int baseRate, int percent)
{
	if (post == "Tester")
	{
		return addTester(id, forename, hoursWorked, baseRate);
	}
	else if (post == "Programmer")
	{
		return addProgrammer(id, forename, hoursWorked, baseRate);
	}
	else if (post == "TeamLeader")
	{
		return addTeamLeader(id, forename, hoursWorked, baseRate);
	}
	else if (post == "Driver") 
	{
		return addDriver(id, forename, hoursWorked, baseRate);
	}
	else if (post == "Cleaner")
	{
		return addCleaner(id, forename, hoursWorked, baseRate);
	}
	else if (post == "Manager") 
	{
		return addManager(id, forename, hoursWorked, percent);
	}
	else if (post == "ProjectManager") 
	{
		return addProjManager(id, forename, hoursWorked, percent);
	}
	else if (post == "SeniorManager") 
	{
		return addSenManager(id, forename, hoursWorked, percent);
	}
}

Cleaner* CompanyCreation::addCleaner(int id, string forename, int hoursWorked, int baseRate) 
{
	Cleaner* newCleaner = new Cleaner(id, forename, hoursWorked, baseRate);
	return newCleaner;
}

Driver* CompanyCreation::addDriver(int id, string forename, int hoursWorked, int baseRate) 
{
	Driver* newDriver = new Driver(id, forename, hoursWorked, baseRate);
	return newDriver;
}

Tester* CompanyCreation::addTester(int id, string forename, int hoursWorked, int baseRate) 
{
	Tester* newTester = new Tester(id, forename, hoursWorked, baseRate);
	return newTester;
}

Programmer* CompanyCreation::addProgrammer(int id, string forename, int hoursWorked, int baseRate) 
{
	Programmer* newProgrammer = new Programmer(id, forename, hoursWorked, baseRate);
	return newProgrammer;
}

TeamLeader* CompanyCreation::addTeamLeader(int id, string forename, int hoursWorked, int baseRate) 
{
	TeamLeader* newTeamLeader = new TeamLeader(id, forename, hoursWorked, baseRate);
	return newTeamLeader;
}

Manager* CompanyCreation::addManager(int id, string forename, int hoursWorked, int percent) 
{
	Manager* newManager = new Manager(id, forename, hoursWorked, percent);
	return newManager;
}

ProjectManager* CompanyCreation::addProjManager(int id, string forename, int hoursWorked, int percent) 
{
	ProjectManager* newProjectManager = new ProjectManager(id, forename, hoursWorked, percent);
	return newProjectManager;
}

SeniorManager* CompanyCreation::addSenManager(int id, string forename, int hoursWorked, int percent) 
{
	SeniorManager* newSeniorManager = new SeniorManager(id, forename, hoursWorked, percent);
	return newSeniorManager;
}