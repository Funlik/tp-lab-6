#include "Engineer.h"
#include "Project1.h"


Programmer::Programmer(int id1, string name1, int work_time1, int base1)
{
	this->id = id1;
	this->name = name1;
	this->deposit = 0;
	this->project = NULL;
	this->work_time = work_time1;
	this->base = base1;
	this->profession = "programmer";
}

Tester::Tester(int id1, string name1, int work_time1, int base1)
{
	this->id = id1;
	this->name = name1;
	this->deposit = 0;
	this->project = NULL;
	this->work_time = work_time1;
	this->base = base1;
	this->profession = "tester";
}

TeamLeader::TeamLeader(int id1, string name1, int work_time1, int base1,int countofsubordinate1)
{
	this->id = id1;
	this->name = name1;
	this->deposit = 0;
	this->project = NULL;
	this->work_time = work_time1;
	this->base = base1;
	this->CountOfSubordinate = countofsubordinate1;
	this->profession = "teamleader";
}

int TeamLeader::HeadingPayment()
{
	int payment = MoneyOfPerson * CountOfSubordinate;
	return payment;
}

int TeamLeader::CalcPayment()
{
	int payment = PaymentWorkTime() + PaymentProject() + HeadingPayment();
	return payment;
}
int Engineer::PaymentWorkTime()
{
	int payment = work_time * base;
	return payment;
}

int Engineer::PaymentProject()
{
	if (project != NULL) {
		int payment = deposit * (project->budget) / 100;
		return payment;
	}
	else
	{
		return 0;
	}
}

int Engineer::CalcPayment()
{
	int payment = PaymentWorkTime() + PaymentProject();
	return payment;
}

void Programmer::add_project(Project* project1, int deposite1)
{
	this->project = project1;
	this->deposit = deposite1;
}
void Tester::add_project(Project* project1, int deposite1)
{
	this->project = project1;
	this->deposit = deposite1;
}

void TeamLeader::add_project(Project* project1)
{
	this->project = project1;
	this->deposit = 0;
}
