#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Programmer.h"
#include "Heading.h"
#include <vector>
#include "Tester.h"

class TeamLeader : public Programmer, public Heading
{
private:
	std::vector<Tester*> listTesters;
	std::vector<Programmer*> listProgrammers;
public:
	TeamLeader(int id, std::string name, int worktime, int baseRate);

	std::vector<Tester*> getTesters();
	std::vector<Programmer*> getProgrammers();

	void addTester(Tester* human);
	void addProgrammer(Programmer* human);
	
	double calculateHeadingPayment(int leaderRate);
	void calc(int budget, int percent, int leaderRate);
};
#endif