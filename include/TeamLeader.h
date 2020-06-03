#pragma once
#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading {
    protected:
        int num_of_employees;
    public:
		TeamLeader(int id, std::string fio, int worktime, int payment_base,
			double contribution, std::string project_name, int budget, int num_of_employees);
		void calcpayment() override;
		int WorkTimePayment() override;
		int ProjectPayment() override;
		int HeadingPayment() override;
};