#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "ProjectManager.h"

using namespace std;
class SeniorManager :public ProjectManager {
protected:
	int people = 0;
public:
	SeniorManager(int ValueId, string ValueName, int ValueWorktime, int ValueProject, int ValuePeople) :ProjectManager(ValueId, ValueName, ValueWorktime, ValueProject, ValuePeople) {};
	int SalaryProject(int NumberProject)override {
		int NewBonus = NumberProject * 30000;
		return NewBonus;
	}
	int SalaryHeading(int ValuePeople) override {
		int NewPayment = ValuePeople * 4000;
		return NewPayment;
	}
	void SetPayment() override {
		payment = SalaryProject(project) + SalaryHeading(people);
	}
	int GetPayment() {
		return this->payment;
	}
	~SeniorManager() {};
};