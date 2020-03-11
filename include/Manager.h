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

	int getPercent();
	void setPercent(int percent);

	double calculateProjectPayment(int budjet, int percent);

	void calc();	// unuse
	void calc(int budjet, int percent);
	//double calculateHeadngPayment(int leaderRate);
};
#endif