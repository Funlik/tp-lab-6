#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"

class Tester : public Engineer {
public:
	Tester(int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent) :
		Engineer(id, name, worktime, base, projectName, projectBudget, percent) {}
};

#endif // !TESTER_H
