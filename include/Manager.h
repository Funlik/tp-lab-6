#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee, public Project
{
protected:
	vector<string> projects;
	vector<float> ratio;
	vector<int> budget;
public:
	Manager(unsigned int, string, vector<string>, vector<float>, vector<int>);
	float f_project() override
	{
		return this->ratio[0] * this->budget[0];
	};
	void calc() override
	{
		this->payment = f_project();
	}
};

class ProjectManager : public Manager, public Heading
{
protected:
	int workers;
public:
	ProjectManager(unsigned int, string, vector<string>, vector<float>, vector<int>, int);
	float f_heading() override
	{
		return this->workers * 200;
	}
	void calc() override
	{
		this->payment = f_project() + f_heading();
	}
};

class SeniorManager : public ProjectManager
{
protected:
	int workers;
public:
	SeniorManager(unsigned int, string, vector<string>, vector<float>, vector<int>, int);
	float f_project() override
	{
		float payment = 0.0;
		for (int i = 0; i < this->budget.size(); i++)
		{
			payment += this->budget[i] * this->ratio[i];
		}
		return payment;
	}
	float f_heading() override
	{
		return this->workers * 300;
	}
	void calc() override
	{
		this->payment = f_project() + f_heading();
	}
};

#endif
