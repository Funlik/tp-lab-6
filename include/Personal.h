#ifndef Personal_H
#define Personal_H

#include "Worktime.h"
#include "Employee.h"

class Personal : public Worktime, public Employee
{
protected:
	int baseRate;
public:
	Personal(int id, std::string name, int worktime, int baseRate);

	int getBaseRate();
	void setBaseRate(int baseRate);
	int calculateWorktimePayment();

	virtual double calc();
};

#endif