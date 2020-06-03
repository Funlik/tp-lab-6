#pragma once
#include "Employee.h"
#include "WorkTime.h"
class Personal : public Employee, public WorkTime {
    protected:
        int payment_base;
    public:
        Personal(int id, std::string fio, int worktime, int payment_base);
		void set_payment_base(int base);
		int get_payment_base() const;
		int WorkTimePayment() override;
};