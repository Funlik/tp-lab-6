#pragma once

#include "Manager.h"
#include "Heading.h"
#include <vector>

class ProjectManager : public Manager, public Heading
{
public:
	ProjectManager(int id_, string name_, int worktime_);
	int calc_heading_payment() override;
	int calc_project_payment() override;
	void calc() override;
};