#pragma once
#include "WorkTime.h"
#include "Employee.h"

class Personal : public WorkTime, public Employee
{
protected:
	double payment;
public:
	Personal(int id, std::string name, double worktime, double payment);
	double calcWorkTimePayment();
	double getPayment();
	void setPayment(double payment); 
	virtual void calcPayment();
};