#pragma once
#include<vector>
#include<string>
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
#include"Personal.h"

class StaffManager
{
public:
	void create_staff_list(); 
	void print_staff();

private:
	vector<Employee*> empls;
};

class fabric
{
public:
	Employee* 
}