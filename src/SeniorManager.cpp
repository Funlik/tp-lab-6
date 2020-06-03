#include "SeniorManager.h"

SeniorManager::SeniorManager(int id_, string name_, int worktime_) : ProjectManager(id_, name_, worktime_)
{

}

int SeniorManager::calc_heading_payment()
{
	int sub = 0;
	for (int g = 0; g < proj.size(); g++)
	{
		sub += proj[g]->get_num_all() + 1;
	}
	return 70 * sub;
}

int SeniorManager::calc_project_payment()
{
	if (!proj.empty())
	{
		int sum = 0;
		for (int g = 0; g < proj.size(); g++)
		{
			sum += proj[g]->get_budget_() * 0.1;
		}
		return sum;
	}
	else
	{
		return 0;
	}
}

void SeniorManager::calc()
{
	payment =  calc_project_payment() + calc_heading_payment();
}
