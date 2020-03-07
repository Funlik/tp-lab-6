#pragma once

#include "Personal.h"

class Driver : public Personal
{
public:
	Driver(int id_, string name_, int worktime_, int base_);
	void calc() override;
	int premium();
};
