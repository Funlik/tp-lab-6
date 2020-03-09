#include "Driver.h"

Driver::Driver(int id, std::string fio, int worktime, int payment_base) : Personal(id, fio, worktime, payment_base) {};

void Driver::calcpayment() {
	this->payment = WorkTimePayment();
}

int Driver::WorkTimePayment() {
	return worktime * payment_base;
}