
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Engineer.h"

using namespace std;

class Programmer :public Engineer {
private:
	vector<string>langueges;
public:
	Programmer(int ValueId, string ValueName, int ValueWorktime, int ValueRate, int ValueFare, int ValueProject) : Engineer(ValueId, ValueName, ValueWorktime, ValueRate, ValueFare, ValueProject) {};
	
	void AddLanguege() {
		const char* LanguegeMass[] = { "C++", "Python", "C","Go","Java","Ruby","PHP","Linux" };
		langueges.push_back(LanguegeMass[rand() % 8]);
	};

	int SalaryWorkTime(int ValueWorktime, int ValueRate) override {
		int NewPayment = ValueWorktime * ValueRate;
		return NewPayment;
	}
	int SalaryProject(int NumberProject)override {
		int NewBonus = NumberProject * 2000;
		return NewBonus;
	}
	void SetPayment() override {
		payment = SalaryWorkTime(worktime, rate) + SalaryProject(project);
	}
	int GetPayment() {
		return this->payment;
	}
	int LanguegeNumber() {
		return langueges.size();
	}
	~Programmer() {};
	 
};