#include "Employee.h"

using namespace std;

Employee::Employee()
{
	id = -1;
	name = "0";
}


Employee::Employee(int id, string name, int worktime)
{
	this->id = id;
	this->name = name;
	this->work_time = worktime;
	this->income = 0;
	profession = "0";
}







