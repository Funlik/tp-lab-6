#include "Manager.h"

Manager::Manager(int id_, string name_, int worktime_) : Employee(id_, name_, worktime_)
{

}

int Manager::calc_project_payment()
{
	if (!this->proj.empty())
	{
		return proj[0]->per_manager * proj[0]->get_budget_() / 100;
	}
	else
	{
		return 0;
	}
}

void Manager::calc()
{
	payment = calc_project_payment();
}

