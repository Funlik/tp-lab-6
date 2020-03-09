#pragma once
#include "Employee.h"

class Personal : public Employee, public WorkTime {
protected:
	long long rate;
public:
	Personal(int id, std::string FIO, long long rate) : Employee(id, FIO), rate(rate) {
	}

	void set_rate(long long rate) {
		this->rate = rate;
	}
};



class Cleaner : public Personal {
public:

	Cleaner(int id, std::string FIO, long long rate) : Personal(id, FIO, rate) {
		setSalary();
	}

	float getWorktimeSalary(long long rate) override {
		this->salary = WORKTIME * rate;
		return salary;
	}

	void setSalary() override {
		this->salary = getWorktimeSalary(this->rate);
	}
};



class Driver : public Personal {

public:
	Driver(int id, std::string FIO, long long rate) : Personal(id, FIO, rate) {
		setSalary();
	}

	float getWorktimeSalary(long long rate) override {
		this->salary = WORKTIME * rate;
		return salary;
	}

	void setSalary() override {
		this->salary = getWorktimeSalary(this->rate);
	}
};