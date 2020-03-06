#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "Employee.h"
#include "Interface.h"
#include "Project1.h"


using namespace std;

class Manager : public Employee, public Project
{
protected:
	Project* project;
	int deposit;
public:
	Manager() : Employee() 
	{ 
		deposit = 0;
		project = NULL;
	};
	Manager(int, string);
	void add_project(Project*, int);
	virtual double PaymentProject();
	virtual double CalcPayment(); 
};
 
class ProjectManager : public Manager, public IHeading
{
protected:
	int CountOfperson;
	double MoneyOfPerson = 1000.0;
public:
	ProjectManager() : Manager() { CountOfperson = 0; };
	void add_project(Project*);
	ProjectManager(int, string, int,int);
	virtual int HeadingPayment();
	virtual double CalcPayment();
};

class SeniorManager : public ProjectManager
{
protected:
	int base = 10000;
	int CountOfProjects;
public:
	SeniorManager() : ProjectManager() { this->CountOfProjects = 0; };
	SeniorManager(int, string,int);
	void addcountofprojects(size_t);
	virtual int HeadingPayment();
	virtual double CalcPayment();
};

#endif
