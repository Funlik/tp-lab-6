#pragma once

#include "Programmer.h"
#include "Heading.h"
#include "Tester.h"

class TeamLeader : public Programmer, public Heading
{
public:
	TeamLeader(int id_, string name_, int worktime_, int base_);
	int calc_heading_payment() override;
	int calc_project_payment() override;
	void calc();
};
