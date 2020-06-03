#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Employee.h"
#include "Project.h"
using namespace std;

class Manager :public Employee, public Project {
protected:
	int project = 0;
public:
	Manager(int ValueId, string ValueName, int ValueWorktime, int ValueProject) :Employee(ValueId, ValueName, ValueWorktime) {
		this->project = ValueProject;
	};
	~Manager() {};
	void SetNumberProject(int NumberProgect) {
		this->project = NumberProgect;
	}
	int GetNumberProject() {
		return this->project;
	}
	int SalaryProject(int NumberProject)override {
		int SalaryPro = NumberProject * 10000;
		return SalaryPro;
	}
	void SetPayment() override {
		payment = SalaryProject(project);
	}
	int GetPayment() {
		return this->payment;
	}
};