#pragma once
#include "Employee.h"
#include "Project.h"
#include "WorkProject.h"

#include <vector>

class Manager : public Employee, public Project
{
protected:
	float mParticipation;
	int mBudget;
public:
	Manager(int, string, float, int);
	float countByProject() override;
	void  calculatePayment() override;
};