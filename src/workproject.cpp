
#include "workproject.h"

WorkProject::WorkProject(string name, float budget)
{
	project_name = name;
	project_budget=budget;
}

string WorkProject::get_project_name()
{
	return project_name;
}

float WorkProject::get_project_budget()
{
	return project_budget;
}