#pragma once
#include <string>
class Employee
{
protected:
	int id;
	std::string name;	
	double worktime;
	double payment;
public:
	Employee(int id, std::string name, double worktime);
	int getID();
	void setID(int id);
	std::string getName();
	void setName(std::string name);
	int getWorktime();
	void setWorktime(double time);
	int getPayment();
	virtual void calcPayment() ;
};