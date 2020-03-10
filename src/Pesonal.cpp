#include "Pesonal.h"

Pesonal::Pesonal(int id,std::string FIO, std::string position, double worktime, int money, Projects* project) : 
			Employee(id, FIO, position, worktime, project)
{
	this->payment = PaymentWorkTime(worktime, money);
}

double Pesonal::PaymentWorkTime(double worktime, int money)
{
	return worktime * money;
}