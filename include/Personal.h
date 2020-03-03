#pragma once

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
protected:
	int base = 0;
public:
	Personal();
	void setBase(int base);
	int getBase();
};
