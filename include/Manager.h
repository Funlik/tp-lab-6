#pragma once

#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project
{
public:
	Manager(int id_, string name_, int worktime_);
	int calc_project_payment() override;
	void calc() override;
};
