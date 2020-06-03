#pragma once
#include "Employee.h"
#include "Project.h"
class Manager : public Employee, public Project {
    protected:
        double contribution;
        int budget;
        std::string project_name;
    public:
		Manager(int id, std::string fio, int worktime, double contribution, int budget, std::string project_name);
		void calcpayment() override;
		int ProjectPayment() override;
		void setcontribution(double contribution);
		double getcontribution() const;
};