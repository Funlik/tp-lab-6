#ifndef Manager_H
#define Manager_H

#include "Employee.h"
#include "Project.h"

class Manager : public Employee
{
private:
	int percent;
public:
	Manager(int id, std::string name, int worktime, int percent);

	int getPercent(int percent);
	void setPercent(int percent);

	double calculateProjectPayment(int budjet, int percent);

	double calc();	// unuse
	double calc(int budjet, int percent);
	//double calculateHeadngPayment(int leaderRate);
};
#endif