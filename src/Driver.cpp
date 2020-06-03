#include "Driver.h"

Driver::Driver(int id, string name, int worktime) : Personal(id, name, worktime) {}

int Driver::paymentWorkTime() {
	return worktime * 228;
}