#include "Personal.h"

Personal::Personal(unsigned int id, string name, unsigned int base) : Employee(id, name) {
	this->base = base;
}
float Personal::worktime_payment() {
	return this->worktime * this->base;
}
void Personal::calc() {
	this->payment = worktime_payment();
}

Cleaner::Cleaner(unsigned int id, string name, unsigned int base) : Personal(id, name, base) {}

Driver::Driver(unsigned int id, string name, unsigned int base, float bonus) : Personal(id, name, base) {
	this->bonus = bonus / 100 + 1;
}
float Driver::worktime_payment() {
	return this->bonus * this->base * this->worktime;
}