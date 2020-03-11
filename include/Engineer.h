#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
#include "WorkProject.h"


class Engineer: public Employee, public WorkTime, public Project
{
protected:
	float rate;
	float pay_in_hour;
	float mParticipation;
	int mBudget;
public:
	Engineer(int, string, int, float, float, float, int);
	float countByWorktime() override;
	float countByProject() override;
	void  calculatePayment() override;
};

