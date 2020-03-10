
#include "manager.h"

SeniorManager::SeniorManager(int id, string fio, float project_participation, int project_budget, int subordinates) : ProjManager(id, fio, project_participation, project_budget, subordinates)
{

}

float SeniorManager::calchepayment()
{
	return subordinates * 1500;
}

