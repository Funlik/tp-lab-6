#pragma once
#include "Employee.h"
#include "Interfaces.h"

class Pesonal : public Employee, public IWorkTime
{
public:
	Pesonal(int, std::string, std::string, double, int, Projects*);
	double PaymentWorkTime(double, int) override;
};

