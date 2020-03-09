#pragma once
#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, std::string fio, int worktime, double contribution, int budget, int num_of_employees);
	void calcpayment() override;
	int HeadingPayment() override;
};