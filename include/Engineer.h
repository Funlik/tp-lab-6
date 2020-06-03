#ifndef ENGINEER_H
#define ENGINEER_H

#include "WorkTime.h"
#include "Project.h"
#include "Employee.h"

class Engineer : public WorkTime, public Project, public Employee {
protected:
	int base;
	std::string projectName;
	double percent;
	int projectBudget;
public:
	Engineer(int id, std::string name, int worktime, int base, std::string projectname, int projectBudget, double percent);
	virtual int calcWorkTime(int worktime, int base, double overtimeCorfficient = 1) override;
	virtual int calcProject(double percent, int budget) override;
	virtual void calc() override;
	int getBase();
	void setBase(int base);
	std::string getProjectName();
	void setProjectName(std::string projectName);
	double getPercent();
	void setPercent(double percent);
	int getProjectBudget();
	void setProjectBudget(int projectBudget);
};

#endif // !ENGINEER_H