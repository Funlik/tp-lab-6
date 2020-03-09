#pragma once
#include "Personal.h"
class Driver : public Personal {
    public:
		Driver(int id, std::string fio, int worktime, int payment_base);
		void calcpayment() override;
		int WorkTimePayment() override;
};