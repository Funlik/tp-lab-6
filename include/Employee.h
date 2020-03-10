#pragma once

#include <string>

using namespace std;

class Employee {
protected:
	int id;
	string name;
	int worktime;
public:
	Employee(int id, string name, int worktime);
	void setId(int id);
	int getId();
	void setName(string name);
	string getName();
	void setWorktime(int worktime);
	int getWorktime();
	virtual int getPayment() = 0;
};
