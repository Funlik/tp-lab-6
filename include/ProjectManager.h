#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"
#include "Programmer.h"
#include "Tester.h"
#include <vector>

class ProjectManager : public Manager, public Heading {
protected:
	int headingBase;
	std::vector<Programmer*>subProgrammers;
	std::vector<Tester*>subTesters;
	std::vector<Manager*>subManagers;
public:
	ProjectManager(int id, std::string name, std::string projectName, int projectBudget, double percent, int headingBase);
	std::vector<Programmer*>getSubProgrammers();
	void addSubProgrammer(Programmer* programmer);
	std::vector<Manager*>getSubManagers();
	void addSubManager(Manager* manager);
	std::vector<Tester*>getSubTesters();
	void addSubTester(Tester* tester);
	virtual void calc() override;
	virtual int calcHeading(int headingBase, int subordinatesNumber) override;
};

#endif // !PROJECTMANAGER_H
