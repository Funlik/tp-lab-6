#pragma once
#include "Personal.h"

class Driver :
	public Personal
{
public:
	Driver(std::string id, std::string name, int workTime, int base) :
		Personal(id, name, workTime, base){};
	~Driver() {};
};

