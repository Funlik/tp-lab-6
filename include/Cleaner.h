#pragma once

#include "Personal.h"

class Cleaner : public Personal {
private:
	int paymentWorkTime() override;
public:
	Cleaner(int id, string name, int worktime);
};