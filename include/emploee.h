#pragma once
#include <string>
using namespace std;
class Employee
{
protected:
	int id;
	string fio;
	int worktime;
	float payment=0;

public:
	
	Employee(int ID, string FIO);
	virtual void CalcPayment()=0;
	void setTime(int WorkTime);
	int getID () const;
	string getFIO() const;
	float getPayment() const;

	};

