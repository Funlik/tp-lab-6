#include "Employee.h"

Employee::Employee(int id, string name, int worktime) {
	this->id = id;
	this->name = name;
	this->worktime = worktime;
}

void Employee::setId(int id) {
	this->id = id;
}

int Employee::getId() {
	return id;
}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getName() {
	return name;
}

void Employee::setWorktime(int worktime) {
	this->worktime = worktime;
}

int Employee::getWorktime() {
	return worktime;
}