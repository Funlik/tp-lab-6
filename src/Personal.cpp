#include "Personal.h"


Personal::~Personal()
{
}

void Personal::print() const
{
	cout << "Per: ";
	Employee::print();
}

int Personal::paymentCount()
{
	return WorkTimePayment();
}

//void Personal::workProsses(int WTmodif)
//{
//	Employee::workProsses(WTmodif);
//	cout << "working..." << endl;
//
//}

int Personal::WorkTimePayment()
{
	int payment = getWorkTime() * Rate;
	return payment;
}

Cleaner::~Cleaner()
{
}

Driver::~Driver()
{
}