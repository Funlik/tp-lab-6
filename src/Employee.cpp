#include "Employee.h"

Employee::Employee(unsigned int id, string name) {
	this->id = id;
	this->name = name;
	this->worktime = 0;
	this->payment = 0.0;
}

void Employee::setWorkTime(unsigned int time) {
	this->worktime = time;
}

void Employee::print() {
	cout << this->id << ") " << this->name << ". Заработная плата: " << this->payment << " рублей" << endl;
}

unsigned int Employee::getID() {
	return this->id;
}

unsigned int Employee::getWorkTime() {
	return this->worktime;
}

string Employee::getName() {
	return this->name;
}