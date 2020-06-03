#include "Driver.h"
#include <ctime>

Driver::Driver(int id_, string name_, int worktime_, int base_) : Personal(id_, name_, worktime_, base_)
{
	
}

void Driver::calc()
{
	payment = premium()*100 + calc_working_time_payment();
}

int Driver::premium()
{
	srand(time(NULL));
	return (1 + rand() % 10);
}
