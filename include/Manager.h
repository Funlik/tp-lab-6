#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project{
protected:
	int percent;
public:
	Manager(int id, std::string name, int worktime, int percent);
	int getPercent();
	void setPercent(int target);
	int calculateProjectPayment(int percent, int budget);
	void Calc();
	void Calc(int percent, int budget);
};
#endif
