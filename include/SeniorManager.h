#pragma once

#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
public:
	SeniorManager(int, string, float, int, int);
	float countByHeading() override;
};

