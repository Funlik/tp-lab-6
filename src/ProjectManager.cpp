#include "ProjectManager.h"

ProjectManager::ProjectManager(int id, string name, int worktime, ProjectBudget* project) : 
Manager(id, name, worktime, project) {
	if (project) {
		project->data->decManagers();
		project->data->incProjectManagers();
	}
}

ProjectManager::~ProjectManager() {
	if (project) {
		project->data->decProjectManagers();
	}
}

int ProjectManager::paymentHeading() {
	return project->getManagers() * 2000;
}

int ProjectManager::getPayment() {
	return paymentProject() + paymentHeading();
}