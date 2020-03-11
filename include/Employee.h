#pragma once

#include <string>

class Employee
{
protected:
	Employee();
	Employee(int id, const std::string &name, int worktime, int payment);
	int id = 0;
	std::string name;
	int worktime = 0;
	int payment = 0;
public:

	virtual void setPayment() = 0;


	void SetId(int id);

	void SetFio(const std::string &name);

	void SetWorkTime(int worktime);
    
	int getId();

	std::string getFio();

	int getWorkTime();

	int getPayment();
};
