#include "Tester.h"

Tester::Tester(int id_, string name_, int worktime_, int base_) : Engineer(id_, name_, worktime_, base_)
{

}

int Tester::calc_project_payment()
{
	if (!proj.empty())
	{
		return proj[0]->per_tester * proj[0]->get_budget_() / 100;
	}
	else
	{
		return 0;
	}
}
