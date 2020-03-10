#pragma once

#include "Employee.h"
#include "IWorkTime.h"

class Personal : public Employee, public IWorkTime {
protected:
	int paymentWorkTime() override;
public:
	Personal(int id, string name, int worktime);
	int getPayment() override;
};