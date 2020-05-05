#pragma once
#include<iostream>
#include<string>

using namespace std;
class Employee
{
public:
	Employee( int id, string name) 
		: id{id}, name{name} {}
	virtual void print_inf() = 0;
	virtual void calc() = 0;
	void setWT( int wt) { worktime = wt; }
	static Employee* createEmployee(const string& employeeInfoLine, int id);
protected:
	int id;
	int worktime = 0;
	double payment = 0;
	string name;
};
