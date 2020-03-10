#pragma once
#include <vector>
#include <string>
#include <iostream>

class Employee;

class Projects
{
private:
	std::string title;
	int budget;
	std::vector <Employee*> employees;

public:
	Projects(std::string, int);
	std::string GetTitle();
	int GetBudget();
	void AddEmployee(Employee*);
	std::vector <Employee*> GetEmployees();
	void ShowAllInformation();
};

