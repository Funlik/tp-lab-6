#pragma once

#include "Interfaces.h"
#include "Employee.h"

class Personal : public Employee, public IWorkTime
{
protected:
	int hourlyWage;
public:
	Personal(int id, std::string name, int hourlyWage);

	virtual int CalculateWage() = 0;
	int CalculateBaseWage() override;

	~Personal() {};
};

class Cleaner : public Personal
{
public:
	Cleaner(int id, std::string name, int hourlyWage);
	int CalculateWage() override;
	~Cleaner() {};
};

class Driver : public Personal
{
private:
	int extraWage;
public:
	Driver(int id, std::string name, int hourlyWage, int extraWage);
	int CalculateWage() override;
	~Driver() {};
};