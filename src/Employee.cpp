#include "Employee.h"
std::string Employee::getName() {
	return name;
}
std::string Employee::getOccupation() {
	return position;
}
void Employee::setTime(int hours) {
	worktime = hours;
}
Employee::Employee(int id, std::string name, std::string position) {
	this->id = id;
	this->name = name;
	this->position = position;
	this->payment = 0;
	this->worktime = 0;
}
int Employee::getPayment() {
	return payment;
}