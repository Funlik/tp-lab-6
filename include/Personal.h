#ifndef PERSONAL_H
#define PERSONAL_H

#include "Employee.h"
#include "Interfaces.h"

class Personal : public Employee, public WorkTime {
protected:
	int paymentPerHour;
public:
	Personal(int id, std::string name, std::string position);
	virtual ~Personal() {};
	virtual int calcSalary() = 0;
	virtual int calcBaseSalary();
};

class Cleaner : public Personal {
public:
	Cleaner(int id, std::string name, std::string position, int paymentPerHour);
	~Cleaner() {};
	virtual int calcSalary() override;
};

class Driver : public Personal {
private:
	int extraPayment;
public:
	Driver(int id, std::string name, std::string position, int paymentPerHour, int extraPayment);
	~Driver() {};
	virtual int calcSalary() override;
};

#endif