#pragma once
#include<iostream>
#include<string>
#include<map>
#include "Employee.h"

using namespace std;

map <string, int> projects = { { "Project1", 1000000 },
								 { "Project2", 500000 },
								 { "Project3", 2000000 } };


class Manager :public Employee, public Project {
protected:
	double part;
	string project;
public:
	Manager(int NewId, string NewName, int NewWorktime, double NewPart, string NewProject, int fund) :Employee(NewId, NewName, NewWorktime), Project(fund)
	{
		this->part = NewPart;
		this->project = NewProject;
	}
	double countByProject()
	{
		return fund * part;
	}
	int getPayment()
	{
		payment = countByProject();
		return payment;
	}
};


class ProjectManager : public Manager, public Heading {
protected:
	int people;
	int basepeople = 50;
public:
	ProjectManager(int NewId, string NewName, int NewWorktime, double NewPart, string NewProg, int fund, int people ) :Manager( NewId, NewName, NewWorktime, NewPart, NewProg, fund)
	{
		this->people = people;
	}
	int countByHeading()
	{
		return  people * basepeople;
	}
	int getPayment()
	{
		payment = countByProject() + countByHeading();
		return payment;
	}
}; 

class SeniorManager :public ProjectManager {
public:
	SeniorManager(int NewId, string NewName, int NewWorktime, double NewPart, string NewProg, int fund, int people ) :ProjectManager(NewId,  NewName,  NewWorktime,  NewPart, NewProg,  fund, people) {};
	int getPayment()
	{
		
			int sum = 0;
			for (auto x : projects) {
				sum += x.second;
			}
			return sum * this->part + ProjectManager::countByHeading();
		

	}
};
