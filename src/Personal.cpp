#include "Personal.h"

Personal::Personal (int id, std::string fio, int worktime, int payment_base) : Employee(id, fio, worktime){
	this->payment_base = payment_base;
}

int Personal::get_payment_base() const {
	return payment_base;
}

void Personal::set_payment_base(int base) {
	payment_base = base;
}

int Personal::WorkTimePayment() {
	return payment_base * worktime;
}