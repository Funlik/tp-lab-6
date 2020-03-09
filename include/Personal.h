#ifndef PERSONAL_H
#define PERSONAL_H

#include "WorkTime.h"
#include "Employee.h"

class Personal: public Employee, public WorkTime{
protected:
	int base;
public:
	Personal(int id, std::string name, int worktime, int base): Employee(id, name, worktime) {
		this->base = base;
		calc();
	}
	virtual void calc() override {
		payment = calcWorkTime(worktime, base);
	}
	int getBase() {
		return base;
	}
	void setBase(int base) {
		this->base = base;
		calc();
	}
	virtual int calcWorkTime(int worktime, int base, double overtimeCorfficient = 1) override {
		return worktime * base * overtimeCorfficient;
	}
};

#endif // !PERSONAL_H