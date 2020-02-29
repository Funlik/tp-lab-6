#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Programmer.h"
#include "Heading.h"
#include <vector>
#include "Tester.h"

class TeamLeader : public Programmer, public Heading {
	std::vector<Tester*> testers;
	std::vector<Programmer*> programmers;
public:
	TeamLeader(int id, std::string name, int worktime, int base);
	void addTester(Tester* target);
	void addPrpogrammer(Programmer* target);
	void cleanTester(Tester* target);
	void cleanProgrammer(Programmer* target);
	void cleanAll();
	std::vector<Tester*> getTesters();
	std::vector<Programmer*> getProgrammers();
	int calculateHeadingPayment(int leaderBase);
	void Calc(int percent, int budget, int leaderBase);
};
#endif
