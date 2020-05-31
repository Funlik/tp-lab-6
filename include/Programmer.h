#pragma once

#include "Engineer.h"
#include <string>

class Programmer : public Engineer
{
public:
	Programmer();
	Programmer(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution);

	void setPayment() override;

};
