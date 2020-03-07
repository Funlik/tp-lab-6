#pragma once

#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
public:
	SeniorManager(int id_, string name_, int worktime_);
	int calc_heading_payment() override;
	int calc_project_payment() override;
	void calc() override;
};

// у него один процент от проектов 