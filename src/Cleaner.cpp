#include "Cleaner.h"

Cleaner::Cleaner(int id, string name, int worktime) : Personal(id, name, worktime) {}

int Cleaner::paymentWorkTime() {
	return worktime * 200;
}