#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iostream>

class Employee
{
public:
	int id;
	std::string name;
	std::string position;
	int worketime = 50;
	int paiment = 0;
	std::string project;
	int part = 0;
	int project_sum = 1000000;
	int heads = 0;
public:
	Employee() {};
	virtual double get_money() = 0
	{}
	std::string get_name()
	{
		return this->name;
	}
	int get_id()
	{
		return this->id;
	}
};

class Factory
{
public:
	std::vector<Employee*> emp;
public:
	void create_employee();
	void print_emp()
	{
		int i = 0;
		while (i<emp.size())
		{
			std::cout << emp[i]->get_id() << " | " << emp[i]->get_name() << " | Payment:" << emp[i]->get_money() << std::endl;
			i++;
		}
	}
};

class WorkTime
{
public:
	virtual int count() =0 {}
};

class Project
{
	friend Factory;
public:
	virtual double pr_bonus() =0 {}
};
class Personal : public Employee, public WorkTime
{
	friend Factory;
public:
	int count() override
	{
		return this->worketime*this->paiment;
	}
	double get_money() override
	{
		return this->count();
	}
};
class Engineer : public WorkTime, public Project, public Employee
{
	friend Factory;
public:
	int count() override
	{
		return this->worketime*this->paiment;
	}
	double pr_bonus() override
	{
		return this->part*0.01*this->project_sum;
	}
	double get_money() override
	{
		return this->count() + this->pr_bonus();
	}
};
class Heading
{
	friend Factory;
public:
	virtual double h_bonus()=0 {}
};
class Manager : public Employee, public Project
{
	friend Factory;
public:
	double pr_bonus() override
	{
		return this->part*0.01*this->project_sum;
	}
	double get_money() override
	{
		return this->pr_bonus();
	}
};
class Cleaner : public Personal
{
	friend Factory;
};
class Driver : public Personal
{
	friend Factory;
};
class Programmer: public Engineer
{
	friend Factory;
};
class Tester : public Engineer
{
	friend Factory;
};
class ProjectManager : public Manager, public Heading
{
	friend Factory;
public:
	double h_bonus() override
	{
		return this->heads * 100;
	}
	double get_money() override
	{
		return this->h_bonus() + this->pr_bonus();
	}
};
class TeamLeader : public Heading, public Programmer
{
	friend Factory;
public:
	double h_bonus() override
	{
		return this->heads * 100;
	}
	double get_money() override
	{
		return this->count() + this->h_bonus() + this->pr_bonus();
	}
};
class SeniorManager : public ProjectManager
{
	friend Factory;
public:
	double pr_bonus() override
	{
		return 3*this->part*0.01*this->project_sum;
	}
	double get_money() override
	{
		return this->h_bonus() + this->pr_bonus();
	}
};