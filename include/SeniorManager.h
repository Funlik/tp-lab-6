#pragma once
#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
public:
	SeniorManager(int, std::string, std::string, double, double, Projects*, int);
	int PaymentHeading(int, Projects*) override;
};

