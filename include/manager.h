#pragma once
#include<iostream>
#include<string>
#include "employee.h"
#define tmp 200
#define min_rate 10000

using namespace std;
class Manager :public Employee, public Project{
protected:
	double part;
public:
	Manager(int id, string name, int worktime, double part, int fund);
	double countByProject();
	int getPayment();
}; // менеджер.Оплату получает из денег проекта, которым руководит.
//third level
class ProjectManager: public Manager,public Heading{
protected:
	int people;
	int rate_for_sub=tmp;
public:
	ProjectManager(int id, string name, int worktime, double part,int fund, int people);
	int countByHeading();
	int getPayment();
}; //проектный менеджер.
//forth level
class SeniorManager :public ProjectManager{
public:
	SeniorManager(int id, string name, int worktime, double part, int fund, int people) :ProjectManager(id, name, worktime, part,fund, people){};
	int getPayment();
}; //руководитель направления.

