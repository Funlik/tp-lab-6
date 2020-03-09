#pragma once

#include <string>

class Employee 
{
protected:
	int id;
	std::string name;
	int wage;
	int worktime;

public:
	Employee(int id, std::string name);
	int GetId() const;
	std::string GetName() const;
	int GetWage() const;
	void SetWorktime(int worktime);

	virtual int CalculateWage() = 0;
	virtual ~Employee() {};
};