#pragma once
#include "Manager.h"
#include "Interfaces.h"

class ProjectManager : public Manager, public IHeading
{
public:
	ProjectManager(int, std::string, std::string, double, double, Projects*, int);
	int PaymentHeading(int, Projects*) override;
};

