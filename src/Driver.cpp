#include "Driver.h"

Driver::Driver(int id, string name, int worktime, float rate) : Personal(id, name, worktime, rate)
{

}

float Driver::countByWorktime()
{
	return ratePerHour * worktime * 1.198890;
}
