#include "Employee.h"

Employee::Employee(int id, string name) {
	this->id = id;
	this->name = name;
}

Employee::Employee(int id, string name, int worktime) {
	this->id = id;
	this->name = name;
	this->worktime = worktime;
}

float Employee::get_payment() {
	return payment;
}

int Employee::get_id() {
	return id;
}

float Employee::get_worktime() {
	return worktime;
}


string Employee::get_name() {
	return name;
}

string Employee::get_position() {
	return position;
}
