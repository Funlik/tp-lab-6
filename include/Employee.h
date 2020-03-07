#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
	int id;
	std::string name;
	std::string position;
	int worktime;
	int payment;
public:
	Employee(int id, std::string name, std::string position);
	virtual ~Employee() {};
	std::string getName();
	std::string getOccupation();
	int getPayment();
	virtual int calcSalary() = 0;
	void setTime(int hours);
};

#endif