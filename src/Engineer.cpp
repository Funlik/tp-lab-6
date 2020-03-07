#include "Engineer.h"

Engineer::Engineer(int id_, string name_, int worktime_, int base_) : Employee(id_, name_, worktime_)
{
	base = base_;
	proj = {};
}

int Engineer::calc_working_time_payment()
{
	return worktime * base;
}

void Engineer::calc()
{
	payment = calc_working_time_payment() + calc_project_payment();
}
