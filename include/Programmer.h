#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"

class Programmer : public Engineer
{
public:
	Programmer(int, string, int, float, float, float, int);
	//float calculate_payment_by_worktime();
	//float calculate_payment_by_project();
	//void  calculate_payment();
};

#endif