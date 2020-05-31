#pragma once
#ifndef PERSONAL_H
#define PERSONAL_H
#include "Employee.h"

class Personal : public Employee, public WorkTime {
protected:
	unsigned int base;
public:
	Personal(unsigned int id, string name, unsigned int base);
	virtual float worktime_payment();
	void calc();
};

class Cleaner : public Personal {
public:
	Cleaner(unsigned int id, string name, unsigned int base);
};

class Driver : public Personal {
protected:
	float bonus; // % 
public:
	Driver(unsigned int id, string name, unsigned int base, float bonus);
	float worktime_payment();
};

#endif