#pragma once
#include "Manager.h"
#include "Heading.h"
#include <vector>

class ProjectManager : public Manager, public Heading
{
	std::vector<Manager*> managerList;
public:
	ProjectManager(int id, std::string name, double worktime, double payment);
	void addManager(Manager* person);
	std::vector<Manager*> getManager();
	void managerOnDelete(Manager* person);
	void deleteAll();
	virtual double calculateChiefPayment(double chiefPaymant);
	void calc(double payment, double budget, double chiefPayment);
};