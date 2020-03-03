#pragma once

#include "Employee.h"
#include "Project.h"
#include <string>

class Manager : public Employee, public Project
{
protected:
	double contribution = 0;
	int budget = 0;
	std::string project;
public:
	Manager();
	Manager(int id, const std::string &name, const std::string &project, int budget, double contribution);
	void setPayment() override;
    int getPayment(int budget, double contribution) override;

	void setContribution(double contribution);

	double getContriution();

	void setProject(const std::string &project);

	std::string getProject();
};
