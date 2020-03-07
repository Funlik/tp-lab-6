#ifndef MANAGERS_H
#define MANAGERS_H

#include "Employee.h"
#include "Interfaces.h"
#include "Task.h"
#include <vector>

class Manager : public Employee, public Project {
protected:
	Task* project;
	int projectContribution;
public:
	Manager(
		int id,
		std::string name,
		std::string position,
		Task* project, int projectContribution
	);
	virtual ~Manager() {};
	virtual int calcSalary() override;
	virtual int calcProjectIncome() override;

};

class ProjectManager : public Manager, public Heading {
protected:
	int staffNumber;
	int headingPayment;
public:
	ProjectManager(
		int id,
		std::string name,
		std::string position,
		Task* project, int projectContribution,
		int headingPayment, int staffNumber
	);
	virtual ~ProjectManager() {};
	virtual int calcSalary() override;
	virtual int calcHeadingIncome() override;
};

class SeniorManager : public ProjectManager {
private:
	std::vector<Task*> projects;
public:
	SeniorManager(
		int id,
		std::string name,
		std::string position,
		std::vector<Task*> projects, int projectContribution,
		int headingPayment, int staffNumber
	);
	virtual ~SeniorManager() {};
	virtual int calcSalary() override;
	//int calcStaff();
	int calcProjectIncome();

};

#endif