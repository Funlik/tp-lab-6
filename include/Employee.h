#pragma once
#include <iostream>

using namespace std;

class Employee
{
protected:
	int id;
	string name;
	int worktime;
	float payment;

public:
	Employee(int, string, int);
	virtual void calculatePayment() = 0;
	float getPayment();
	string getName();
};