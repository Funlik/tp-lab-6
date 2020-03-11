#ifndef Employee_H
#define Employee_H

#include <string>

class Employee
{
protected:
	int id;
	std::string name;
	int worktime;
	int rate;
public:
	Employee(int id, std::string name, int worktime);
	int getID();
	int getWorktime();
	int getRate();
	std::string getName();

	void setID(int id);
	void setName(std::string name);
	void setWorktime(int worktime);

	virtual void calc() = 0;
};



#endif