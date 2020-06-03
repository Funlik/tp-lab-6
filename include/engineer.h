
#pragma once

#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"

using namespace std;

class Engineer : public Employee, public WorkTime, public Project
{
protected:
	float base; //оклад он обязателен, даже если не работает
	float pay_in_hour;
	float project_participation;
	int project_budget;
public:
	Engineer(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
	float calcwtpayment() override;
	float calcprpayment() override; //переопределили функцию?
	void solary() override;
};

class Programmer : public Engineer
{
public:
	Programmer(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
};

class Tester : public Engineer
{
public:
	Tester(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget);
	float calcwtpayment() override;
};

class TeamLeader : public Programmer, public Heading
{
protected:
	int subordinates;
public:
	TeamLeader(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget, int subordinates);
	float calchepayment() override;
	void solary() override;
};

#endif