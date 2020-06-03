#pragma once
#include "Employee.h"
#include "IWorkTime.h"

class Personal: 
	public Employee, protected IWorkTime
{
protected:
	int base_;
	int calcPaymentForWorkTime();

public:	
	Personal(std::string id, std::string name, int workTime, int base);	
	~Personal();

	void setBase(int base);
	int getBase();

	void calcPayment();	
};

