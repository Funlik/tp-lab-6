#pragma once
#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
protected:
	float ratePerHour;
public:
	Personal(int, string, int, float);
	float countByWorktime() override;
	void  calculatePayment() override;
};