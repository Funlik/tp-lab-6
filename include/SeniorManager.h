#ifndef SENIORMANAGER_H
#define SENIORTMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
public:
	SeniorManager(int, string, float, int, int);
	//float calculate_payment_by_project();
	float calculate_payment_by_heading() override;
	//void calculate_payment();
};

#endif SENIORMANAGER_H
