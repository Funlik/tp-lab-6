#pragma once
#include "Personal.h"
class Driver : public Personal
{
public:
	Driver(int id, std::string name, double worktime, double payment);
	void calcPayment() {};
};