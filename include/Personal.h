#pragma once
#include"Employee.h"
#include"Interfaces.h"
using namespace std;

class Personal : public Employee, WorkTime
{
public:
	Personal(int id, string name, double baseRate) :Employee::Employee(id, name), baseRate{baseRate} {}
	void calc() { payment = calcWT(worktime, baseRate); }
	virtual double calcWT(double wt, double baseRate) = 0;

protected:
	double baseRate;
};


class Cleaner : public Personal
{
public:
	using Personal::Personal;
	double calcWT(double wt, double baseRate);
	void print_inf();
};


class Driver : public Personal
{
public:
	using Personal::Personal;
	double calcWT(double wt, double baseRate);
	void print_inf();
};