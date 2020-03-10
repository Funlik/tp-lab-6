
#pragma once

#ifndef PERSONAL_H
#define PERSONAL_H

#include "employee.h"

using namespace std;

class Personal : public Employee, public WorkTime
{
protected: //потому что могут обращаться только родственники
	float base; //
public:
	Personal(int id, string fio, int worktime, float base);
	float calcwtpayment() override;
	void solary() override;
};

class Cleaner : public Personal
{
public:
	Cleaner(int id, string fio, int worktime, float base);
};

class Driver : public Personal
{
public:
	Driver(int id, string fio, int worktime, float base);
	float calcwtpayment() override;
};

#endif