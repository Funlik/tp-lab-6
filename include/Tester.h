#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"

class Tester : public Engineer
{
public:
	Tester(int, string, int, float, float, float, int);
	//float calculate_payment_by_worktime();
	//float calculate_payment_by_project();
	void  calculate_payment() override;
};

#endif