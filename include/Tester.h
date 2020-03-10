#ifndef Tester_H
#define Tester_H

#include "Engineer.h"

class Tester : public Engineer
{
public:
	Tester(int id, std::string name, int worktime, int baseRate);
};
#endif