#pragma once //fix
#include "Employee.h"
#include<vector>
using namespace std;

class Engineer : public Employee, public WorkTime, public Project {
public:
	Engineer(int id, string name, int worktime, int base);
	int CalcWorkTimePay();
	int CalcProjPay(int percent, int budget);
	void CalculatePayment(int percent, int budget);
	void CalculatePayment();
protected:
	int base;
};

class Programmer : public Engineer {
public:
	Programmer(int id, string name, int worktime, int base);
};

class Tester : public Engineer {
public:
	Tester(int id, string name, int worktime, int base);
};

class TeamLeader : public Programmer, public Heading {
	vector<Tester*> test_workers;
	vector<Programmer*> prog_workers;
public:
	TeamLeader(int id, string name, int worktime, int base);
	void AddTester(Tester* new_test);
	void DelTester(Tester* old_test);
	void AddProgrammer(Programmer* new_prog);
	void DelProgrammer(Programmer* old_prog);
	int CalcHeadPay(int leaderbase);
	void CalculatePayment(int percent, int budget, int leaderbase);
};