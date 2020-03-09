#pragma once

#include <string>

using namespace std;

class Employee
{
public:
	Employee(string fio, int id, int payment);
	~Employee();
	int getId();
	string getFio();
	void setId(int id);
	void setFio(string fio);
	int getPayment();
	void setPayment(int moneyPerTime);
	virtual int getSalary()=0;
protected:
	int payment;
	int id;
	string fio;
};

