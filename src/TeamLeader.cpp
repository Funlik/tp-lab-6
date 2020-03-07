#include "TeamLeader.h"

TeamLeader::TeamLeader(int id_, string name_, int worktime_, int base_) : Programmer(id_, name_, worktime_, base_)
{

}

int TeamLeader::calc_heading_payment()
{
	return 150 * (proj[0]->num_programmer + proj[0]->num_tester);
}

int TeamLeader::calc_project_payment()
{
	if (!proj.empty())
	{
		return proj[0]->per_team_leader * proj[0]->get_budget_() / 100;
	}
	else
	{
		return 0;
	}
}

void TeamLeader::calc()
{
	this->payment = calc_working_time_payment() + calc_project_payment() + calc_heading_payment();
}
