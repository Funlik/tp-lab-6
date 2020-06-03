
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "includeHeader.h"

class Employee
{
public:
	//virtual int Calc() = 0;
	Employee(int id = 0, string name = "", int payment = 1) : ID(id), Name(name), WorkTime(0), Payment(payment) {};

	Employee(const Employee&);
	Employee& operator=(const Employee&);


	virtual void print() const;
	void printEmpl(Employee&);



	void setWorkTime(int WT);
	void workProsses(int WTmodif);



	int getID() const;
	string getName() const;
	int getWorkTime() const;
	int getPayment() const;

	virtual int paymentCount();

private:
	int ID;
	string Name;
	int WorkTime;
	int Payment;
};





#endif // !EMPLOYEE_H

