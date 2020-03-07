#pragma once //fix
#include <string>
using namespace std;

class Employee {
public:
	Employee(int id_, string name_, int worktime_);
	int GetId();
	int GetWorkTime();
	string GetName();
	int GetPayment();
	void ChangeId(int new_id);
	void ChangeWorkTime(int new_worktime);
	virtual void CalculatePayment() = 0;
protected:
	int id;
	string name;
	int worktime;
	int payment;
};

class WorkTime {
public:
	virtual int CalcWorkTimePay() = 0;
};

class Project {
public:
	virtual int CalcProjPay(int percent, int budget) = 0;
};

class Heading {
public:
	virtual int CalcHeadPay(int leaderbase) = 0;
};