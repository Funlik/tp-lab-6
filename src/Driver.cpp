#include "Driver.h"

Driver::Driver(int id, std::string name, int worktime, int base) : Personal(id, name, worktime, base)
{
}

void Driver::calc()
{
	this->rate = 1.2 * calculateWorktimePayment();	//as coef for rewrite function
}