#pragma once
#include <string>
#include "Interfaces.h"
#include <vector>
#include <iostream>


class Employee {
protected:
	int id;
	std::string FIO;
	float salary;
public:
	Employee(int id, std::string FIO) : id(id), FIO(FIO) {}

	virtual void setSalary() = 0;

	std::string get_FIO() {
		return this->FIO;
	}

	float get_salary() {
		return this->salary;
	}

	int get_id() {
		return this->id;
	}
};


