#include "Cleaner.h"

Cleaner::Cleaner(int cl_id, string cl_name, int cl_worktime, float cl_rate): Personal(cl_id, cl_name, cl_worktime, cl_rate)
{

}
/*
float Cleaner::calculate_payment_by_worktime()
{
	return rate_in_hour * worktime;
}

void Cleaner::calculate_payment()
{
	payment = calculate_payment_by_worktime();
}
*/