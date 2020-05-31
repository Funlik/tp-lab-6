#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Interfaces.h"

using namespace std;

class Employee {
protected:
	unsigned int id;
	string name;
	unsigned int worktime;
	float payment;
public:
	Employee(unsigned int, string);
	void setWorkTime(unsigned int);
	virtual void calc() {};
	void print();
	unsigned int getID();
	unsigned int getWorkTime();
	string getName();
};

#endif