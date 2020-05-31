#pragma once

#include "Personal.h"
#include <string>

class Cleaner : public Personal
{
public:
	Cleaner(int id, const std::string &name, int worktime, int base);

    int getWorkTime(int worktime, int base) override;
	void setPayment() final override;
};
