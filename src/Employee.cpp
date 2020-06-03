#include "Employee.h" //fix

//Employee

Employee::Employee(int id_, string name_, int worktime_){
	this->id = id_;
	this->name = name_;
	this->worktime = worktime_;
	this->payment = 0;
}

int Employee::GetId() {
	return this->id;
}

int Employee::GetWorkTime() {
	return this->worktime;
}

string Employee::GetName() {
	return this->name;
}

int Employee::GetPayment() {
	return this->payment;
}

void Employee::ChangeId(int new_id) {
	this->id = new_id;
}

void Employee::ChangeWorkTime(int new_worktime) {
	this->worktime = new_worktime;
}

void Employee::CalculatePayment() {
}