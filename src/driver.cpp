
#include "personal.h"

Driver::Driver(int id, string fio, int worktime, float base) : Personal(id, fio, worktime, base)
{

}

float Driver::calcwtpayment()
{
	return base * worktime * 1.5;
}
