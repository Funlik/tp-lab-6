#ifndef PERSONAL_H
#define PERSONAL_H
#include "Employee.h"
#include "WorkTime.h"
class Personal: public Employee, public WorkTime {
protected:
	int base;
public:
	Personal(int id, std::string name, int worktime, int base);
	int calculateWorkTimePayment();
	virtual void Calc();
	int getBase();
	void setBase(int base);
};
#endif
