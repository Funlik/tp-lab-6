#include "Factory.h"

int id = 0,
worktime = 100;

EmployeeFactory::EmployeeFactory(vector<WorkProject*> proj)
{
	projects = proj;
}

Employee* EmployeeFactory::create(vector<string> data)
{	
	id++;
	string employeePosition = data[1];
	if (employeePosition == "Cleaner")
		return new Cleaner(id, data[0], worktime, stoi(data[2]));

	else if (employeePosition == "Driver")
		return new Driver(id, data[0], worktime, stoi(data[2]));

	else if (employeePosition == "Tester")
	{
		int budget = 0;
		for (auto proj : projects)
		{
			if (proj->getName() == data[5])
				budget = proj->getBudget();
		}
		return new Tester(id, data[0], worktime, stoi(data[3]), stoi(data[4]), stof(data[2]), budget);
	}
	else if (employeePosition == "Programmer")
	{
		int budget = 0;
		for (auto proj : projects)
		{
			if (proj->getName() == data[5])
				budget = proj->getBudget();
		}
		return new Programmer(id, data[0], worktime, stoi(data[3]), stoi(data[4]), stof(data[2]), budget);
	}


	else if (employeePosition == "TeamLeader")
	{
		int budget = 0;
		for (auto proj : projects)
		{
			if (proj->getName() == data[5])
				budget = proj->getBudget();
		}
		return new TeamLeader(id, data[0], worktime, stoi(data[3]), stoi(data[4]), stof(data[2]), budget, stoi(data[6]));
	}

	else if (employeePosition == "Manager")
	{
		int budget = 0;
		for (auto proj : projects)
		{
			if (proj->getName() == data[3])
				budget = proj->getBudget();
		}
		return new Manager(id, data[0], stof(data[2]), budget);
	}

	else if (employeePosition == "ProjectManager")
	{
		int budget = 0;
		for (auto proj : projects)
		{
			if (proj->getName() == data[3])
				budget = proj->getBudget();
		}
		return new ProjectManager(id, data[0], stof(data[2]), budget, stoi(data[4]));
	}

	else if (employeePosition == "SeniorManager")
	{
		int budget = 0;
		for (auto proj : projects)
		{
				budget += proj->getBudget();
		}
		return new SeniorManager(id, data[0], stof(data[2]), stoi(data[3]), budget);
	}
}