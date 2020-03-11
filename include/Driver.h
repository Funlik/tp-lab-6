#pragma once
#include "Personal.h"

class Driver : public Personal
{
public:
	Driver(int, string, int, float);
	float countByWorktime() override;
};