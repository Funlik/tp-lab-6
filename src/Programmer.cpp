#include "Programmer.h"

Programmer::Programmer(int pr_id, string pr_name, int pr_worktime, float pr_rate, float pr_pay_in_hour, float pr_progect_participation,
	int pr_project_budget) :
	Engineer(pr_id, pr_name, pr_worktime, pr_rate, pr_pay_in_hour, pr_progect_participation, pr_project_budget)
{

}

/*
float Programmer::calculate_payment_by_worktime()
{
	return worktime * pay_in_hour;
}

float Programmer::calculate_payment_by_project()
{
	return project->get_project_budget() * project_participation;
}

void Programmer::calculate_payment()
{
	payment = calculate_payment_by_project() + calculate_payment_by_worktime() + rate;
}
*/