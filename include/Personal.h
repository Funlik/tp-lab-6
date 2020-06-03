#pragma once

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
protected:
	int base;

public:
	Personal(int id_, string name_, int worktime_, int base_);
	int calc_working_time_payment() override;
	void calc() override;
	int get_base();
	void set_base(int base_);
};
