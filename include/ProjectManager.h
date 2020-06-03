#pragma once
#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading
{
protected:
	int juniors;
public:
	ProjectManager(int, string, float, int, int);
	//float countByProject();
	float countByHeading() override;
	void  calculatePayment() override;
};

