#include "InfProject.h"

InfProject::InfProject(string name_, int budget_)
{
	name = name_;
	budget = budget_;
}

int InfProject::get_num_all()
{
	return num_programmer + num_tester + num_team_leader + num_manager;
}

string InfProject::get_name_()
{
	return name;
}

int InfProject::get_budget_()
{
	return budget;
}
