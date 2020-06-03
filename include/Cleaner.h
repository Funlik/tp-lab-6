#pragma once
#include "Personal.h"

class Cleaner : public Personal
{
public:
	Cleaner(int id, std::string name, double worktime, double payment);	
	void calcPayment() {};
};