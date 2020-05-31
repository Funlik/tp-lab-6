#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"

class Engineer : public Employee, public Worktime, public Project
{
protected:
	vector<float> ratio;
	vector<string> projects;
	vector<int> budget;
	unsigned int base;
public:
	Engineer(unsigned int, string, unsigned int, vector<string>, vector<float>, vector<int>);
	void calc()=0;
	float f_worktime() override
	{
		return this->base * this->worktime;
	}
	float f_project() override
	{
		return this->ratio[0] * this->budget[0];
	}
	
};

class Programmer : public Engineer
{
private:
public:
	Programmer(unsigned int, string, unsigned int, vector<string>, vector<float>, vector<int>);
	void calc() override
	{
		this->payment = f_project() + f_worktime();
	}
};

class Tester : public Engineer
{
private:
public:
	Tester(unsigned int, string, unsigned int, vector<string>, vector<float>, vector<int>);
	void calc() override
	{
		this->payment = f_project() + f_worktime();
	}
};

class TeamLeader : public Programmer, public Heading
{
protected:
	int workers;
public:
	TeamLeader(unsigned int, string, unsigned int, vector<string>, vector<float>, vector<int>, int);
	float f_heading() override
	{
		return this->workers*200;
	}
	void calc() override
	{
		this->payment = f_project() + f_worktime() + f_heading();
	}
};


#endif