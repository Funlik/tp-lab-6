#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Programmer.h"
#include "Heading.h"
using namespace std;

class TeamLeader :public Programmer,public Heading {
protected:
	int people = 0;
	vector<string>langueges;
public:
	TeamLeader(int ValueId, string ValueName, int ValueWorktime, int ValueRate, int ValueFare, int ValueProject, int ValuePeople) :Programmer( ValueId,  ValueName,  ValueWorktime,  ValueRate,  ValueFare,  ValueProject) {
		this->people = ValuePeople;
	}
	void AddLanguege() {
		const char* LanguegeMass[] = { "C++", "Python", "C","Go","Java","Ruby","PHP","Linux" };
		langueges.push_back(LanguegeMass[rand() % 8]);
	};
	int SalaryWorkTime(int ValueWorktime, int ValueRate) override {
		int NewPayment = ValueWorktime * ValueRate;
		return NewPayment;
	}
	int SalaryProject(int NumberProject)override {
		int NewBonus = NumberProject * 3000;
		return NewBonus;
	}
	int SalaryHeading(int ValuePeople) override {
		int NewPayment = ValuePeople * 2500;
		return NewPayment;
	}
	void SetPayment() override {
		payment = SalaryWorkTime(worktime, rate) + SalaryProject(project)+ SalaryHeading(people);
	}
	int GetPayment() {
		return this->payment;
	}
	int LanguegeNumber() {
		return langueges.size();
	}
	~TeamLeader() {};
};