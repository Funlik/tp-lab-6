#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
using namespace std;

class Engineer :public Employee, public WorkTime, public Project {
protected:
	int rate = 0;
	int fare = 0;
	int project = 0;
public:
	Engineer(int ValueId, string ValueName, int ValueWorktime, int ValueRate, int ValueFare, int ValueProject) :Employee(ValueId, ValueName, ValueWorktime) {
		this->rate = ValueRate;
		this->fare = ValueFare;
		this->project = ValueProject;
	};
	~Engineer() {};

	void SetRate(int NewRate) {
		this->rate = NewRate;
	};

	void SetFare(int NewFare) {
		this->fare = NewFare;
	}
	void SetNumberProject(int NumberProgect) {
		this->project = NumberProgect;
	}
	int GetRate() const {
		return this->rate;
	}
	int GetFare() const {
		return this->fare;
	}
	int GetNumberProject() {
		return this->project;
	}

};