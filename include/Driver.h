#pragma once

#include "Personal.h"
#include <string>

class Driver : public Personal
{
public:
	Driver(int id, const std::string &name, int worktime, int base);
    int getWorkTime(int worktime, int base) override;

	void setPayment() override;
};
