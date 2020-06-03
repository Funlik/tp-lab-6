#pragma once
#include "Engineer.h"
#include "IHeading.h"
#include "Programmer.h"
#include <vector>

class TeamLeader :
	public Engineer, protected IHeading
{
protected:
	int baseLeader_;
	std::vector <Programmer*> subordinates_;
	int calcPaymentForHeading();	

public:
	TeamLeader(std::string id, std::string name, int workTime, int base, int percent, int baseLeader);
	~TeamLeader();

	void setBaseLeader(int baseLeader);
	int getBaseLeader();

	void addSubordinate(Programmer* programmer);
	void removeAllSubordinates();
	void printSubordinates();

	void calcPayment();
};

