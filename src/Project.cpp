#include <string>
#include "Project.h"

Project::Project(std::string name, int budget)
{
	this->name = name;
	this->budget = budget;
}

std::string Project::GetName() const
{
	return name;
}

int Project::GetBudget() const 
{
	return budget;
}

Project* Project::IsProjectExist(std::string name, std::vector<Project *> projects) 
{
	for (auto & project : projects)
		if (project->GetName() == name)
			return project;
	return nullptr;
}