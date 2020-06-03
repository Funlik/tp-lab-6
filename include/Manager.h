#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "Project.h"

class Manager :public Employee, public Project{
protected:
	std::string projectName;
	double percent;
	int projectBudget;
public:
	Manager(int id, std::string name, std::string projectName, int projectBudget, double percent);
	std::string getProjectName();
	void setProjectName(std::string projectName);
	double getPercent();
	void setPercent(double percent);
	int getProjectBudget();
	void setProjectBudget(int projectBudget);
	virtual void calc() override;
	virtual int calcProject(double percent, int budget) override;
};

#endif // !MANAGER_H
