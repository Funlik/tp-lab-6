#include "Driver.h"

Driver::Driver(int id, std::string name, int worktime, int base) : Personal(id, name, worktime, base)
{
}

void Driver::Calc()
{
	this->payment = 1.01 * calculateWorkTimePayment();
}