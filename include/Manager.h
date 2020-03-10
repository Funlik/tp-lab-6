#pragma once
#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project
{
protected:
	double percent;
public:
	Manager(int id, std::string name, double worktime, double payment);
	double getPercent();
	void setPercent(int person);
	double calculateProjectPayment(double percent, double budget);
	void calcPayment(double percent, double budget);
};