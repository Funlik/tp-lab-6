#ifndef DRIVER_H
#define DRIVER_H

#include "Personal.h"

class Driver : public Personal {
protected:
	double overtimeCorfficient;
public:
	Driver(int id, std::string name, int worktime, int base, double overtimeCorfficient) : Personal(id, name, worktime, base) {
		this->overtimeCorfficient = overtimeCorfficient;
		calc();
	}
	virtual void calc() override{
		payment = calcWorkTime(worktime, base, overtimeCorfficient);
	}
	double getOvertimeCorfficient() {
		return overtimeCorfficient;
	}
	double setOvertimeCorfficient() {
		this->overtimeCorfficient = overtimeCorfficient;
		calc();
	}
};

#endif // !DRIVER_H
