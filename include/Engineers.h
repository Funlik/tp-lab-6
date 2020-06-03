#ifndef ENGINEERS_H
#define ENGINEERS_H

#include "Employee.h"
#include "Interfaces.h"
#include "Task.h"

class Engineer : public Employee, public WorkTime, public Project {
protected:
	int paymentPerHour;
	int projectContribution;
	Task* project;
public:
	Engineer(
		int id, 
		std::string name, 
		std::string occupation, 
		int paymentPerHour, 
		Task* project, int projectContribution
	);
	virtual ~Engineer() {};
	virtual int calcSalary() = 0;
	virtual int calcBaseSalary();
	virtual int calcProjectIncome();
};

class Programmer : public Engineer {
public:
	Programmer(
		int id, 
		std::string name, 
		std::string occupation, 
		int paymentPerHour, 
		Task* project, int projectContribution
	);
	virtual ~Programmer() {};
	virtual int calcSalary() override;
};

class Tester : public Engineer {
	int extraPayment;
public:
	Tester(
		int id, 
		std::string name, 
		std::string occupation, 
		int paymentPerHour, 
		int extraPayment, 
		Task* project, int projectContribution
	);
	virtual ~Tester() {};
	virtual int calcSalary() override;
};

class TeamLeader : public Programmer, public Heading {
	int staffNumber;
	int headingPayment;
public:
	TeamLeader(
		int id, 
		std::string name, 
		std::string occupation, 
		int paymentPerHour, 
		Task* project, int projectContribution, 
		int headingPayment, int staffNumber
	);
	virtual ~TeamLeader() {};
	virtual int calcSalary() override;
	int calcHeadingIncome();
	//void addSubordinate();
};

#endif