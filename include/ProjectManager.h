#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading
{
protected:
	int subordinates;
public:
	ProjectManager(int, string, float, int, int);
	//float calculate_payment_by_project();
	float calculate_payment_by_heading() override;
	void  calculate_payment() override;
};

#endif PROJECTMANAGER_H
