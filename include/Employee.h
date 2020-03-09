#pragma once
#include <string>

class Employee
{
protected:
	std::string id_;
	std::string name_;
	int workTime_;
	int payment_;

public:
	Employee(std::string id, std::string name, int workTime);//Employee(std::string id, std::string name, int workTime, int payment);

	void setID(std::string id);
	std::string getID();
	
	void setName(std::string name);
	std::string getName();
	
	void setWorkTime(int workTime);
	unsigned int getWorkTime();
	
	void setPayment(int);
	unsigned int getPayment();

	void virtual calcPayment() = 0;
	~Employee();	   
};

