#pragma once
#include <string>
#include "Interfaces.h"
using namespace std;

class Employee {
protected:
	int id;
	string name;
	string position;
	float payment; 
	float worktime = 0;
public:
	Employee(int id, string name);
	Employee(int id, string name, int worktime);
	float get_payment();
	string get_name();
	string get_position(); 
	float get_worktime();
	int get_id();
	virtual void set_payment() = 0;
	
};
