#include <iostream>
#include "Abstracts.h"
#include "Interfaces.h"
#include "factory.h"
using namespace std;

//=======METHODS FOR EMPLOYEE========

extern map<string, int> projects;

Employee::Employee(string name, unsigned int id)
{
	this->name = name;
	this->id = id;
	worktime = 0;
}

unsigned int Employee::getId() const
{
	return id;
}

unsigned int Employee::getWorkTime() const
{
	return worktime;
}

string Employee::getName() const
{
	return name;
}

void Employee::setWorkTime(unsigned int time)
{
	this->worktime = time;
}
//=======METHODS FOR PERSONAL========

Personal::Personal(string name, unsigned int id, float base, string position) :Employee(name, id)
{
	this->base = base;
	this->position = position;
}

float Personal::getPaymentbyWorkTime() 
{
	return base * worktime;
}

//=======METHODS FOR ENGINEER========

Engineer::Engineer(string name, unsigned int id, float base, string position, string project, float contribution): Employee(name, id)
{
	this->base = base;
	this->position = position;
	this->project = project;
	this->contribution = contribution;
}

float Engineer::getPaymentbyWorkTime()
{
	return worktime * base;
}

float Engineer::getPaymentbyProject()
{
	return projects[project] * contribution;
}
