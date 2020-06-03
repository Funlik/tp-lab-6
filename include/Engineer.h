#pragma once
#include "WorkTime.h"
#include "Employee.h"
#include "Project.h"

class Engineer : public Employee
{
protected:
	double payment;
public:
	Engineer(int id, std::string name, double worktime, double payment);
	virtual double calcWorkTimePayment();
	virtual double calcProjectPayment(double percent, double budget);
	virtual void calcPayment(double percent, double budget);
};