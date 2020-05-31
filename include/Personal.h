#pragma once
#ifndef PERSONAL_H
#define PERSONAL_H
#include "Employee.h"


class Personal : public Employee, public Worktime
{
protected:
	unsigned int base;
public:
	Personal(unsigned int, string, unsigned int);
	void calc() = 0;
	float f_worktime()
	{
		return this->base * this->worktime;
	}
};


class Driver : public Personal
{
public:
	Driver(unsigned int,string, unsigned int);
	void calc() override 
	{
		this->payment = f_worktime();
	}
};

class Cleaner : public Personal
{
public:
	Cleaner(unsigned int, string, unsigned int);
	void calc() override
	{
		this->payment = f_worktime();
	}
};


#endif
