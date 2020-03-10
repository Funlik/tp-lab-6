#ifndef Driver_H
#define Driver_H

#include "Personal.h"

class Driver : public Personal
{
public:
	Driver(int id, std::string name, int worktime, int baseRate);

	double calc();
};
#endif