#pragma once

#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
#include <string>

class Engineer : public Employee, public WorkTime, public Project
{
protected:
	int base = 0;
	double contribution = 0;
	std::string project;
	int budget = 0;
public:
	Engineer();
    int getPayment(int budget, double contribution) ;
    int getWorkTime(int worktime, int base) ;

	void setBase(int base);

	int getBase();

	void setContribution(double contribution);

	double getContriution();

	void setProject(const std::string &project);

	std::string getProject();
};
