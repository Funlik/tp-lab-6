#pragma once

#include "Manager.h"
#include "Heading.h"
#include <string>

class ProjectManager : public Manager, public Heading
{
protected:
	int salary = 0;
public:
	ProjectManager();
	ProjectManager(int id, const std::string &name, const std::string &project, int budget, double contribution, int salary);

	void setPayment() override;
    int getHeadingPayment(int salary) override;
};
