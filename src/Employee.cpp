#include "Employee.h"

Employee::Employee(int id, std::string name, int worktime) {
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	this->payment = 0;
}
void Employee::setId(int id) {
	this->id = id;
}
int Employee::getWorktime() {
	return worktime;
}
void Employee::setWorktime(int worktime) {
	this->worktime = worktime;
	calc();
}
int Employee::getPayment() {
	return payment;
}
std::string Employee::getName() {
	return name;
}
void Employee::getName(std::string name) {
	this->name = name;
}
std::ostream& operator<<(std::ostream& os, const Employee& employee) {
	os << employee.id << " " << employee.name << " " << employee.payment;
	return os;
}