#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Personal.h"
using namespace std;

class Driver :public Personal {
private:
	string TypeOfCar;
public:
	Driver(int ValueId, string ValueName, int ValueWorktime, int ValueRate) :Personal(ValueId, ValueName, ValueWorktime, ValueRate) {
		
	};
	int SalaryWorkTime(int ValueWorktime, int ValueRate) override {
		payment = ValueWorktime * ValueRate;
		return payment;
	}
	void SetPayment() override {
		payment = SalaryWorkTime(worktime, rate);
	}
	void SetTypeCar(string ValueTCar) {
		this->TypeOfCar = ValueTCar;
	}
	string GetTypeOfCar() {
		return this->TypeOfCar;
	}
	int GetPayment() {
		return this->payment;
	}
	~Driver() {};
};