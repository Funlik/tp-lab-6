#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
protected:
	int id;
	std::string name;
	int worktime;
	int payment;
public:
	Employee(int id, std::string name, int worktime);
	int getID();
	void setID(int id);
	std::string getName();
	void setName(std::string name);
	int getWorktime();
	void setWorktime(int worktime);
	int getPayment();
	virtual void Calc() = 0;
};
#endif
