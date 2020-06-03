#include "Cleaner.h"

Cleaner::Cleaner(int id, std::string fio, int worktime, int payment_base) : Personal(id, fio, worktime, payment_base) {  };

void Cleaner::calcpayment(){
	this->payment = WorkTimePayment();
}

int Cleaner::WorkTimePayment() {
	return worktime * payment_base;
}