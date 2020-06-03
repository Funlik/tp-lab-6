#ifndef Programmer_H
#define Programmer_H

#include "Engineer.h"

class Programmer : public Engineer
{
public:
	Programmer(int id, std::string name, int worktime, int baseRate);
};
#endif