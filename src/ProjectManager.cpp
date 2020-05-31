#include "ProjectManager.h"

ProjectManager::ProjectManager(int pm_id, string pm_name, float pm_project_participation, int pm_project_budget,
	int pm_subordinates) :
	Manager(pm_id, pm_name, pm_project_participation, pm_project_budget)
{
	subordinates = pm_subordinates;
}

/*
float ProjectManager::calculate_payment_by_project()
{
	float money_from_progects = 0;
	for (auto project : projects)
		money_from_progects += project->get_project_budget() * project_participation;
	return money_from_progects;
}
*/

float ProjectManager::calculate_payment_by_heading()
{
	return subordinates * 1000;
}

void ProjectManager::calculate_payment()
{
	payment = calculate_payment_by_project() + calculate_payment_by_heading();
}

