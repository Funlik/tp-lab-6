#pragma once
#include "includeHeader.h"

#include"WorkTime.h"
#include "Employee.h"

class Personal : public Employee, public WorkTime
{
public:
	Personal(int id = 0, string name = "",int rate = 1): Employee(id, name), Rate(rate) {};
	~Personal();
	int WorkTimePayment() override;
	void print() const;
	int paymentCount();

private:
	int Rate;
};





class Cleaner : public Personal
{
public:
	Cleaner(int id = 0, string name = "", int rate = 1) : Personal(id, name, rate) {};
	~Cleaner();
private:
	int Rate = 1;
};




class Driver : public Personal
{
public:
	Driver(int id = 0, string name = "", int rate = 1) : Personal(id, name, rate) {};
	~Driver();

private:
	int Rate = 1;
};


