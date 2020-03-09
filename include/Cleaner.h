#pragma once
#include "Personal.h"
class Cleaner : public Personal{
    public:
		Cleaner(int id, std::string fio, int worktime, int payment_base);
		void calcpayment() override;
		int WorkTimePayment() override;
};