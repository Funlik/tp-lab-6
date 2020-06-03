#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, string name, float participation, int budget,
	int mJuniors) :
	Manager(id, name, participation, budget)
{
	juniors = mJuniors;
}

float ProjectManager::countByHeading()
{
	return juniors * 1167;
}

void ProjectManager::calculatePayment()
{
	payment = countByProject() + countByHeading();
}

