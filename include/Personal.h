#pragma once
#include "Employee.h"

class Personal : public Employee, public WorkTime {
protected:
	int base;
public:
	Personal(int id, string name, int worktime, int base);
	float worktime_salary() override;
	void set_payment() override;
};

class Driver : public Personal {
public:
	Driver(int id, string name, int worktime, int base);
};

class Cleaner : public Personal {
public:
	Cleaner(int id, string name, int worktime, int base);
};

