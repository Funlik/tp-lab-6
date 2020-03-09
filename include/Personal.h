#pragma once
#include "Employee.h" 
#include <string>
using namespace std;

class Personal :public Employee
{
protected:
		int base; //ставка
public:
	Personal(int NewId, string NewName, int NewWorktime, int NewBase) : Employee(NewId, NewName, NewWorktime)
	{
		this->base = NewBase;
	}

	int countByTime() {
		return worktime * base;
	}
	int getPayment() {
		payment = countByTime();
		return payment;
	}
	
		

};


class Cleaner :public Personal {
public:
	Cleaner(int NewId, string NewName, int NewWorktime, int NewBase) :Personal(NewId, NewName, NewWorktime, NewBase){};

	
	int getPayment()
	{
		payment = Personal::getPayment();
		return payment;
	}

};


class Driver :public Personal {

public:
	Driver(int NewId, string NewName, int NewWorktime, int NewBase) :Personal( NewId, NewName, NewWorktime, NewBase)
	{
		
	};
	int getPayment() {
		payment = Personal::getPayment();
		return payment;
	}
};