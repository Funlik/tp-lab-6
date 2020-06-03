#pragma once

#include "Engineer.h"

class Programmer : public Engineer
{
public:
	Programmer(int id_, string name_, int worktime_, int base_);
	int calc_project_payment() override;
};
