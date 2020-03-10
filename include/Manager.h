#pragma once
#include "Employee.h"
#include "Interfaces.h"
#include "Projects.h"

class Manager : public Employee, public IProject
{
protected:
	static int countManager;
public:
	Manager(int, std::string, std::string, double, double, Projects*);
	double PaymentProject(double) override;
};

