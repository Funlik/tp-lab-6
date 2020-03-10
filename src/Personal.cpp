#include "Personal.h"

Personal::Personal(int id, string name, int worktime) : Employee(id, name, worktime) {}

int Personal::paymentWorkTime() {
	return worktime * 150;
}

int Personal::getPayment() {
	return paymentWorkTime();
}