#ifndef Cleaner_H
#define Cleaner_H

#include "Personal.h"

class Cleaner : public Personal
{
public:
	Cleaner(int id, std::string name, int worktime, int baseRate);
};
#endif