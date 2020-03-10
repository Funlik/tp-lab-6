#pragma once
#include "Engineer.h"

class Programmer : public Engineer
{
public:
	Programmer(int id, std::string name, double worktime, double payment);
};