#ifndef personalH
#define personalH

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
public:
	Personal(int ID, string name, int worktime, int base);
	void changeBase(int newBase);
	int getBase();
	int calcWTPayment();
	void calcPayment();

protected:
	int worktime;
	int base;
};

class Cleaner : public Personal
{
public:
	Cleaner(int ID, string name, int worktime, int base);
};

class Driver : public Personal
{
public:
	Driver(int ID, string name, int worktime, int base);
};

#endif