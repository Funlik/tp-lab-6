#include "WorkProject.h"

WorkProject::WorkProject(string name, float budget)
{
	projecName = name;
	projectBudget = budget;
}

float WorkProject::getBudget()
{
	return projectBudget;
}

string WorkProject::getName()
{
	return projecName;
}