#pragma once
#include "Engineer.h"

class Programmer : public Engineer
{
public:
	Programmer(int, std::string, std::string, double, int, double, Projects*);
};

