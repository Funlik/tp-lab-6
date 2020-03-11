#pragma once

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
protected:
	int base = 0;
	Personal();
public:
	void setBase(int base);
	int getBase();
};
