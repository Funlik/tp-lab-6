#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
class Engineer : public Employee {
protected:
	int base;
public:
	Engineer(int id, std::string name, int worktime, int base);
	virtual int calculateWorkTimePayment();
	virtual int calculateProjectPayment(int percent, int budget);
	virtual void Calc();
	virtual void Calc(int percent, int budget);
};
#endif
