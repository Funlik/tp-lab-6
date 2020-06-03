#include "ProjectManager.h"

ProjectManager::ProjectManager(int id_, string name_, int worktime_) : Manager(id_, name_, worktime_)
{

}

int ProjectManager::calc_heading_payment()
{
	return 100 * (proj[0]->get_num_all()); 
}

int ProjectManager::calc_project_payment()
{
	if (!this->proj.empty())
	{
		return proj[0]->per_project_manger * proj[0]->get_budget_() / 100;
	}
	else
	{
		return 0;
	}
}

void ProjectManager::calc()
{
	payment = calc_project_payment() + calc_heading_payment();
}
