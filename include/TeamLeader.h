#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "Programmer.h"
#include "Tester.h"
#include "Heading.h"
#include <vector>

class TeamLeander : public Heading, public Programmer {
protected:
	int headingBase;
	std::vector<Programmer*>subProgrammers;
	std::vector<Tester*>subTesters;
public:
	TeamLeander(int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent, int headingBase);
	std::vector<Programmer*>getSubProgrammers();
	void addSubProgrammer(Programmer* programmer);
	std::vector<Tester*>getSubTesters();
	void addSubTester(Tester* tester);
	virtual void calc() override;
	virtual int calcHeading(int headingBase, int subordinatesNumber) override;
};

#endif // !TEAMLEADER_H
