#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
protected:
	int id, worktime = 0, payment;
	std::string name;
public:
	Employee(int id, std::string name, int worktime);
	int getId() {
		return id;
	}
	void setId(int id);
	int getWorktime();
	void setWorktime(int worktime);
	int getPayment();
	std::string getName();
	void getName(std::string name);
	virtual void calc() = 0;
	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
};

#endif // !EMPLOYEE_H
