
#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "workproject.h"

using namespace std;

class Employee
{
protected:
	int id;
	string fio;
	int worktime;
	float payment;
public:
	Employee(int id, string fio, int worktime);
	string getfio();
	float getpayment();
	virtual void solary() = 0; //начисление зарплаты
};

class WorkTime
{
public:
	virtual float calcwtpayment() = 0;
};

class Project
{
public:
	virtual float calcprpayment() = 0;
};

class Heading
{
public:
	virtual float calchepayment() = 0;
};

#endif