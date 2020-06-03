#pragma once
#include "Programmer.h"
#include "Employee.h"
#include "Interfaces.h"

class TeamLeader : public Programmer, public IHeading
{
public:
	TeamLeader(int, std::string, std::string, double, int, double, Projects*, int);
	int PaymentHeading(int, Projects*) override;
};

