#ifndef PERSONAL_H
#define PERSONAL_H
#pragma once
#include <string>
#include "Employee.h"

using namespace std;

class Personal : public Employee {
protected:
	double base;
public:
	Personal() : Employee() {
		base = 0;
	};
	virtual double PaymentWorkTime();
	virtual double CalcPayment();
};

class Cleaner : public Personal 
{
public:
	Cleaner(int, string, int, int);
};

class Driver : public Personal 
{
public:
	Driver(int, string, int, int);
};
#endif