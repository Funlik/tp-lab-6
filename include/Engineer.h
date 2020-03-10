#ifndef Engineer_H
#define Engineer_H

#include "Personal.h"
#include "Employee.h"
#include "Project.h"

class Engineer : public Worktime, public Project, public Employee
{
protected:
	int baseRate;
public:
	Engineer(int id, std::string name, int worktime, int baseRate);
	virtual double calc();
	virtual double calc(int budjet, int percent);
	virtual double calculateProjectPayment(int budjet, int percent);
	virtual int calculateWorktimePayment();
};
#endif