#pragma once

#include "Personal.h"

class Driver : public Personal {
private:
	int paymentWorkTime() override;
public:
	Driver(int id, string name, int worktime);
};