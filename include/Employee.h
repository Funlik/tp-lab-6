#ifndef employeeH
#define employeeH

#include <string>

using namespace std;

class Employee
{
public:
	Employee(int ID, string name, int worktime);
	int getID();
	void setID(int ID);
	void setName(string name);
	string getName();
	int getWorktime();
	void setWorktime(int worktime);
	int getPayment();
	void setPayment(int payment);
	virtual void calcPayment() = 0;

protected:
	int ID;
	string name;
	int worktime;
	int payment;
};

#endif