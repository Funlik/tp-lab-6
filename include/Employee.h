#pragma once

#include "InfProject.h"

class Employee
{
protected:
	int id;
	string name;
	int worktime;
	vector<InfProject*> proj;
	int payment;

public:
	Employee(int id_, string name_, int worktime_);
	int get_id();
	string get_name();
	void set_worktime(int worktime_);
	int get_payment();
	virtual void set_project(InfProject* proj_);
	virtual void del_last_project(InfProject* proj_);
	virtual vector<InfProject*> get_project();
	virtual void calc() = 0;
};
