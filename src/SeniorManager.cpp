#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, string name, int worktime, ProjectBudget* project) :
	ProjectManager(id, name, worktime, project){}

int SeniorManager::paymentHeading() {
	return project->getProjectManagers() * 2500;
}