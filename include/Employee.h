#pragma once
#include <string>
using namespace std;
class Employee
{
protected:
	int id;
	string name;
	int worktime;
	int payment;
public:
	
	Employee(int NewId, string NewName, int NewWorktime)
	{
		this->id = NewId;
		this->name = NewName;
		this->worktime = NewWorktime;
		
	}

	int getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	

	int getWorktime()
	{
		return worktime;
	}
	
	virtual int getPayment() = 0;
	
	
};

class WorkTime
{
public:
	virtual int countByTime() = 0;
}; 

class Project
{
protected:
	int fund;
public:
	Project(int NewFund)
	{
		this->fund = NewFund;
	}
	virtual double countByProject() = 0;
};

class Heading
{
public:
	virtual int countByHeading() = 0;
};