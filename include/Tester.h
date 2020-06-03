#pragma once
#include "Engineer.h"
class Tester : public Engineer {
    public:
		Tester(int id, std::string fio, int worktime, int payment_base,
			double contribution, std::string project_name, int budget);
		void calcpayment() override;
		int WorkTimePayment() override;
		int ProjectPayment() override;
};