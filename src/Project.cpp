#include "Project.h"

Project::Project(std::string name, int budget)
{
	name_ = name;
	budget_ = budget;
}

Project::~Project()
{
}

std::string Project::getName() {
	return name_;
}

void Project::setName(std::string name) {
	name_ = name;
}

int Project::getBudget() {
	return budget_;
}

void Project::setBudget(int budget) {
	budget_ = budget;
}