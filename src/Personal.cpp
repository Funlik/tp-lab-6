#include "Personal.h"

Personal::Personal(int id, string name, int worktime, int base) : Employee(id, name, worktime) {
	this->base = base;
}

float Personal::worktime_salary() {
	return worktime * base;
}

void Personal::set_payment() {
	this->payment = worktime_salary();
}

Driver::Driver(int id, string name, int worktime, int base) : Personal(id, name, worktime, base) {
	position = "Driver";
}

Cleaner::Cleaner(int id, string name, int worktime, int base) : Personal(id, name, worktime, base) {
	position = "Cleaner";
}
