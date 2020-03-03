#pragma once

#include "Programmer.h"
#include <string>

class TeamLeader : public Programmer
{
protected:
	int salary = 0;
public:
	TeamLeader();
	TeamLeader(int id, const std::string &name, int worktime, int base, const std::string &project, int budget, double contribution, int salary);
    int getHeadingPayment(int salary) ;
	void setPayment() final override;
};
