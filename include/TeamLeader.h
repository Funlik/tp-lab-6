#pragma once
#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading
{
protected:
	int juniors;
public:
	TeamLeader(int, string, int, float, float, float, int, int);
	float countByHeading() override;
	void  calculatePayment() override;
};
