
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Engineer.h"

using namespace std;

class Tester :public Engineer {
private:
	vector<string>langueges;
public:
	Tester(int ValueId, string ValueName, int ValueWorktime, int ValueRate, int ValueFare, int ValueProject) : Engineer(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject) {};
	
	void AddLanguege() {
	const char* LanguegeMass[] = { "C++", "Python", "C","Go","Java" };
	langueges.push_back(LanguegeMass[rand()%5]);
	};

	int SalaryWorkTime(int ValueWorktime, int ValueRate) override {
		int NewPayment = ValueWorktime * ValueRate;
		return NewPayment;
	}
	int SalaryProject(int NumberProject)override {
		int NewBonus = NumberProject * 1000;
		return NewBonus;
	}
	void SetPayment() override {
		payment = SalaryWorkTime(worktime, rate)+ SalaryProject(project);
	}
	int GetPayment() {
		return this->payment;
	}
	int LanguegeNumber() {
		return langueges.size();
	}
	~Tester() {};
};
