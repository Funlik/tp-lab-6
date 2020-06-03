#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Employee {

protected:
	int id;
	string name;
	int worktime;
	int payment=0;

public:
	

	Employee(int ValueId, string ValueName, int ValueWorktime) {
		this->id = ValueId;
		this->name = ValueName;
		this->worktime = ValueWorktime;
	}//êîíñòðóêòîð 

	~Employee() {};//äåñòðóêòîð 

	void SetId(int NewId) {
		this->id = NewId;
	}
	void SetName(string NewName) {
		this->name = NewName;
	}
	void SetWorktime(int NewWorkTime) {
		this->worktime = NewWorkTime;
	}


	int GetId() const {
		return this->id;
	}
	string GetName()const {
		return this->name;
	}
	int GetWorktime()const {
		return this->worktime;
	}
	int GetPayment()const {
		return this->payment;
	}

	virtual void SetPayment() = 0;
};
