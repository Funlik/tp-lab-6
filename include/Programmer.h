#pragma once
#include "Engineer.h"
class Programmer :
	public Engineer
{
public:
	Programmer(std::string id, std::string name, int workTime, int base, int percent) :
		Engineer(id, name, workTime, base, percent) {};
	~Programmer() {};
};

