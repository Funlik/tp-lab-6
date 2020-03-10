#pragma once
#include "Employee.h"
#include "Progect.h"

class Manager : public Employee, public Progect
{
protected:
	double percent;
public:
	Manager(int id, std::string name, double worktime, double payment);
	double getPercent();
	void setPercent(int person);
	double calculateProgectPayment(double percent, double budget);
	void calcPayment(double percent, double budget);
};