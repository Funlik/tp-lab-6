#include "Personal.h"

Personal::Personal(int id_, string name_, int worktime_, int base_) : Employee(id_, name_, worktime_)
{
	base = base_;
}

int Personal::calc_working_time_payment()
{
	return worktime * base;
}

void Personal::calc()
{
	payment = calc_working_time_payment();
}

int Personal::get_base()
{
	return base;
}

void Personal::set_base(int base_)
{
	base = base_;
}
