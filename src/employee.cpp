#include<iostream>
#include<string>
#include "employee.h"
using namespace std;

	Employee::Employee(int id, string name, int worktime){
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	};
	string Employee::getName(){
		return name;
	}
	Project::Project(int fund){
		this->fund = fund;
	}
