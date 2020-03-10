#pragma once
#include "Programmer.h"
#include "Heading.h"
#include "Tester.h"
#include <vector>
class TeamLeader : public Programmer, public Heading
{
	std::vector<Tester*> testersList;
	std::vector<Programmer*> programmersList;
public:
	TeamLeader(int id, std::string name, double worktime, double payment);
	std::vector<Programmer*> getProgrammer();
	std::vector<Tester*> getTester();
	void addTester(Tester* person);
	void deleteTester(Tester* person);
	void addProgrammer(Programmer* person);
	void deleteProgrammer(Programmer* person);
	void deleteAll();
	double calculateChiefPayment(double chiefPayment);
	void calcPayment(double percent, double budget, double chiefPayment);	
};