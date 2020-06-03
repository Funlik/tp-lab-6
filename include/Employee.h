#pragma once
#include <string>
#include <iostream>
#include "Projects.h"

class Employee
{
protected:
	int id;
	std::string FIO;
	std::string position;
	Projects* project;
	double worktime;
	double payment;

public:
	Employee(int, std::string, std::string, double, Projects*);
	std::string GetPosition();
	void GetAllInformation();
};

