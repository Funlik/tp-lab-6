#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Personal.h"
using namespace std;

class Cleaner :public Personal {
public:
	Cleaner(int ValueId, string ValueName, int ValueWorktime, int ValueRate) :Personal(ValueId, ValueName, ValueWorktime, ValueRate) {};
	
	int SalaryWorkTime(int ValueWorktime, int ValueRate) override {
		int NewPayment = ValueWorktime * ValueRate;
		return NewPayment;
	}
	void SetPayment() override{
		payment = SalaryWorkTime(worktime, rate);
	}

	int GetPayment() {
		return this->payment;
	}
	~Cleaner() {};
};