#pragma once
#include <string>

class Project
{
private:
	std::string name_;
	int budget_;
	//for engineer
	//int bonus;
public:
	Project(std::string name, int budget);
	std::string getName();
	void setName(std::string name);
	int getBudget();
	void setBudget(int budget);
	~Project();
};