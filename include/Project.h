#pragma once

#include <string>
#include <vector>

class Project
{
private:
	std::string name;
	int budget;
public:
	Project(std::string name, int cost);
	static Project * IsProjectExist(std::string name, std::vector<Project *> projects);
	std::string GetName() const;
	int GetBudget() const;
};