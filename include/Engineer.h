#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"
#include "Project1.h"
#include "Interface.h"
#include <string>


using namespace std;

class Engineer :public Employee
{
protected:
	int base;
	Project* project;
	int deposit;
public:
	Engineer() : Employee() 
	{
		base = 0;
		deposit = 0;
		project = NULL;
	};
	virtual int PaymentWorkTime();
	virtual int PaymentProject();
	virtual int CalcPayment();
};

class Programmer : public Engineer 
{
public:
	Programmer() : Engineer() {};
	Programmer(int, string,int,int);
	void add_project(Project*, int);
};

class Tester : public Engineer 
{
public:
	Tester(int, string, int, int);
	void add_project(Project*, int);
};

class TeamLeader : public Engineer, public IHeading
{
protected:
	int CountOfSubordinate;
	int MoneyOfPerson = 1000;
public:
	TeamLeader() : Engineer () { CountOfSubordinate = 0; };
	TeamLeader(int, string, int, int,int);
	void add_project(Project*);
	virtual int HeadingPayment();
	virtual int CalcPayment();
};
#endif