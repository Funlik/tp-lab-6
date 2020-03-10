#pragma once
#include "Projects.h"

class IHeading
{
	virtual int PaymentHeading(int, Projects*) = 0;
};

class IProject
{
	virtual double PaymentProject(double) = 0;
};

class IWorkTime
{
public:
	virtual double PaymentWorkTime(double, int) = 0;
};
