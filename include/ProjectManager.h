#pragma once
#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading {
protected:
	int num_of_employees;
public:
	ProjectManager(int id, std::string fio, int worktime, double contribution, int budget, std::string project_name, int num_of_employees);
	void calcpayment() override;
	int ProjectPayment() override;
	int HeadingPayment() override;
};