#include "Engineer.h"

Engineer::~Engineer()
{
}

 void Engineer::print() const
{
	cout << "Eng: ";
	Employee::print();
	cout << "Team: "<< Team << endl;
}

void Engineer::workProsses(int WTmodif)
{
	Employee::workProsses(WTmodif);
	cout << " working..." << endl;
}

int Engineer::WorkTimePayment()
{
	return getWorkTime() * getRate();
}

int Engineer::getRate()
{
	return paymentPerHour;
}

int Engineer::ProjPayment()
{
	return PaymentProj;
}



int Engineer::paymentCount()
{
	//return paymentForHours() + paymentForProj();
	return WorkTimePayment() + ProjPayment();
}


Programmer::~Programmer()
{
};

Tester::~Tester()
{
}

TeamLeader::~TeamLeader()
{
}


int TeamLeader::paymentForLeaders()
{
	return PaymentLeaders;
}

int TeamLeader::paymentCount()
{
	return Engineer::paymentCount() + paymentForLeaders();
}





