#pragma once
#include <iostream>
#include <vector>
#include <map>

#include "Interfaces.h"
using namespace std;

//map <string, int> project;

class Employee
{
protected:
	unsigned int id;
	string name;
	unsigned int worktime;
	float payment = 0;
public:
	Employee(string name, unsigned int id);
	virtual float getPayment() = 0;
	unsigned int getId() const;
	unsigned int getWorkTime() const;
	string getName() const;
	void setWorkTime(unsigned int);
};

class Personal : public Employee, public WorkTime
{
protected:
	float base;
	string position;

public:
	Personal(string name, unsigned int id, float base, string position);
	float getPaymentbyWorkTime() override;
};

class Engineer : public Employee, public WorkTime, public Project
{
protected:
	float base;
	float contribution;
	string position;
	string project;

public:
	Engineer(string name, unsigned int id, float base, string position, string project, float contribution);
	float getPaymentbyWorkTime() override;
	float getPaymentbyProject() override;
};

