
#include "engineer.h"

Tester::Tester(int id, string fio, int worktime, float base, float pay_in_hour, float project_participation, int project_budget) : Engineer(id, fio, worktime, base, pay_in_hour, project_participation, project_budget)
{

}

float Engineer::calcwtpayment()
{
	return pay_in_hour * worktime * 1.5;
}