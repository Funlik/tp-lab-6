#pragma once
#include "Employee.h"
#include "Interfaces.h"
#include "Projects.h"

class Engineer : public Employee, public IWorkTime, public IProject
{
public:
	Engineer(int, std::string, std::string, double, int, double, Projects*);
	double PaymentWorkTime(double, int) override;
	double PaymentProject(double) override;
};

