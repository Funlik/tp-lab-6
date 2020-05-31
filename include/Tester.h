#pragma once

#include "Engineer.h"
#include <string>

class Tester : public Engineer
{
public:
	Tester();
	Tester(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution);

	void setPayment() override;

};
