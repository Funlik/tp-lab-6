#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Employee.h"
#include "WorkTime.h"

using namespace std;

class Personal :public Employee,public WorkTime {
protected:
	int rate=0;
public:
	Personal(int ValueId, string ValueName, int ValueWorktime, int ValueRate) :Employee(ValueId, ValueName, ValueWorktime) {
		this->rate = ValueRate;
	};

	~Personal() {};

	void SetRate(int NewRate) {
		this->rate = NewRate;
	}
	int GetRate() const {
		return this->rate;
	}

};