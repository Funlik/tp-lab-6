#pragma once

#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public Project
{
protected:
	int base;
	
public:
	Engineer(int id_, string name_, int worktime_, int base_);
	int calc_working_time_payment() override;
	void calc() override;
};
