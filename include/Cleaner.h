#pragma once
#include "Personal.h"

class Cleaner :
	public Personal
{
public:
	Cleaner(std::string id, std::string name, int workTime, int base) :
		Personal(id, name, workTime, base) {};
	~Cleaner() {};
};
