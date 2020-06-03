#ifndef engineerH
#define engineerH

#include<vector>
#include "Employee.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"

class Engineer : public Employee, public WorkTime, public Project
{
public:
	Engineer(int ID, string name, int worktime, int base);
	int calcWTPayment();
	int calcProjPayment(int per, int budget);
	void calcPayment(int per, int budget);
	void calcPayment();

protected:
	double base;
	double budget;
	double percent;

};

class Programmer : public Engineer 
{
public:
	Programmer(int ID, string name, int worktime, int base);
};

class Tester : public Engineer 
{
public:
	Tester(int ID, string name, int worktime, int base);
};

class TeamLeader : public Programmer
{
private:
	int leadbase;
	vector<Tester*> testers;
	vector<Programmer*> programmers;

public:
	TeamLeader(int ID, string name, int worktime, int base);
	void addTester(Tester* tester);
	void deleteTester(Tester* _tester);
	void addProgrammer(Programmer* programmer);
	void deleteProgrammer(Programmer* _programmer);
	int calcHeadPayment(int leadbase);
	void calcPayment(int percent, int budget, int leadbase);
};

#endif