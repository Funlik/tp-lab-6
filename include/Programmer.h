#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"

class Programmer: public Engineer{
public:
	Programmer(int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent) :
		Engineer(id, name, worktime, base, projectName, projectBudget, percent) {}
};

#endif // !PROGRAMMER_H
