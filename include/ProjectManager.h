
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Manager.h"
#include "Heading.h"
using namespace std;

class ProjectManager :public Manager, public Heading {
protected:
	int people = 0;
public:
	ProjectManager(int ValueId, string ValueName, int ValueWorktime, int ValueProject, int ValuePeople) :Manager(ValueId, ValueName, ValueWorktime, ValueProject) {
		this->people = ValuePeople;
	}
	int SalaryProject(int NumberProject)override {
		int NewBonus = NumberProject * 20000;
		return NewBonus;
	}
	int SalaryHeading(int ValuePeople) override {
		int NewPayment = ValuePeople * 3000;
		return NewPayment;
	}
	void SetPayment() override {
		payment =  SalaryProject(project) + SalaryHeading(people);
	}
	int GetPayment() {
		return this->payment;
	}
	~ProjectManager() {};
};