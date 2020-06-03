#pragma once
#include "Engineer.h"

class Tester : public Engineer
{
public:
	Tester(int, string, int, float, float, float, int);
	void  calculatePayment() override;
};
