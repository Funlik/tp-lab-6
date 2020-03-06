#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include "Interfaces.h"

class Employee 
{
protected:
	unsigned int id;
	string name;
	unsigned int worktime=0;
	float payment=0;
public:
	Employee(unsigned int,string);
	void setWorktime(unsigned int);
	virtual void calc()=0;
	float getPayment()
	{
		cout << name << " : " << payment << "$" << endl;
		return payment;
	}
}; 

#endif
