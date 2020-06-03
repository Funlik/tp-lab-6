#include "Factory.h"
#include "Employee.h"
#include "Personal.h"
#include "Manager.h"
#include "Engineer.h"
#include "Interfaces.h"
#include "Project.h"
#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>

/*
Файл с сотрудниками имеет такой формат:

Cleaner: {position = 0}
0	1		2			3
id	name	position	hourly_wage

Driver: {position = 1}
0	1		2			3			4
id	name	position	horly_wage	extra_wage

Programmer: {position = 2}
0	1		2			3			4				5				6
id	name	position	hourly_wage	project_name	project_budget	project_contribution

Tester: {position = 3}
0	1		2			3			4				5				6						7
id	name	position	hourly_wage	project_name	project_budget	project_contribution	extra_wage

TeamLeader: {position = 4}
0	1		2			3			4				5				6						7					8
id	name	position	hourly_wage	project_name	project_budget	project_contribution	sumordinates_number	heading_wage

ProjectManager: {position = 5}
0	1		2			3				4				5						6					7
id	name	position	project_name	project_budget	project_contribution	subordinates_number	heading_wage

SeniorManager: {position = 6}
0	1		2			3				4				5					size - 5		size - 4
id	name	position	projects_count	project1_name	project1_budget ...	projectN_name	projectN_budget 

size - 3				size - 2			size - 1
projects_contribution	subordinates_number	heading_wage

*/

std::vector<std::string> split(const std::string & s, char delimiter)
{
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

std::vector<Employee *> parseEmployeeList(std::string fileName)
{
	std::vector<Employee *> employees;
	std::ifstream employeesList(fileName);
	system("chcp 1251");
	
	while (!employeesList.eof())
	{
		std::string buffer;
		std::getline(employeesList, buffer, '\n');
		std::vector<std::string> data = split(buffer, '\t');
		employees.push_back(Factory::CreateEmployee(data));
	}

	return employees;
}

Employee * Factory::CreateEmployee(std::vector<std::string> info)
{
	int position = stoi(info[2]);
	int id = stoi(info[0]);
	std::string name = info[1];
	Employee * specialEmployee = nullptr;
	std::vector<Project *> projects;
	std::string projectName;
	int projectBudget;
	Project * project = nullptr;

	if (2 <= position && position <= 4)
	{
		projectName = info[4];
		projectBudget = stoi(info[5]);
		project = Project::IsProjectExist(projectName, projects);

		if (project == nullptr)
		{
			project = new Project(projectName, projectBudget);
			projects.push_back(project);
		}
	}
	else if (position == 5)
	{
		projectName = info[3];
		projectBudget = stoi(info[4]);
		project = Project::IsProjectExist(projectName, projects);

		if (project == nullptr)
		{
			project = new Project(projectName, projectBudget);
			projects.push_back(project);
		}
	}

	switch (position)
	{
	case CLEANER:
		specialEmployee = new Cleaner(id, name, stoi(info[3]));
		break;
	case DRIVER:
		specialEmployee = new Driver(id, name, stoi(info[3]), stoi(info[4]));
		break;
	case PROGRAMMER:
		specialEmployee = new Programmer(id, name, stoi(info[3]), project, stoi(info[6]));
		break;
	case TESTER:
		specialEmployee = new Tester(id, name, stoi(info[3]), project, stoi(info[6]), stoi(info[7]));
		break;
	case TEAM_LEADER:
		specialEmployee = new TeamLeader(id, name, stoi(info[3]), project, stoi(info[6]), stoi(info[7]), stoi(info[8]));
		break;
	case PROJECT_MANAGER:
		specialEmployee = new ProjectManager(id, name, project, stoi(info[5]), stoi(info[6]), stoi(info[7]));
		break;
	case SENIOR_MANAGER:
	{
		std::vector<Project *> smProjects;
		int count = stoi(info[3]);
		std::string currentName;
		int currentBudget;
		int contribution = stoi(info[4 + 2 * count]);

		for (int i = 0; i < count; i++)
		{
			currentName = info[4 + 2 * i];
			currentBudget = stoi(info[5 + 2 * i]);

			project = Project::IsProjectExist(currentName, projects);

			if (project == nullptr)
			{
				project = new Project(currentName, currentBudget);
				projects.push_back(project);
			}
			smProjects.push_back(project);
		}

		specialEmployee = new SeniorManager(id, name, smProjects, contribution, stoi(info[info.size() - 2]), stoi(info[info.size() - 1]));
	}
		break;
	default:
		break;
	}
	return specialEmployee;
}