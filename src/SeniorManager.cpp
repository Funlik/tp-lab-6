#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, string name, float participation, int juniors,
	int budget): ProjectManager(id, name, participation, budget, juniors)
{
}

float SeniorManager::countByHeading()
{
	return juniors * 2000;
}

