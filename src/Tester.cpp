#include "Tester.h"

Tester::Tester(int t_id, string t_name, int t_worktime, float t_rate, float t_pay_in_hour, float t_progect_participation,
	int t_project_budget) :
	Engineer(t_id, t_name, t_worktime, t_rate, t_pay_in_hour, t_progect_participation, t_project_budget)
{

}

/*
float Tester::calculate_payment_by_worktime()
{
	return worktime * pay_in_hour;
}

float Tester::calculate_payment_by_project()
{
	return project->get_project_budget() * project_participation;
}
*/

void Tester::calculate_payment()
{
	payment = calculate_payment_by_project() + calculate_payment_by_worktime() * 1.6 + rate;
}