#pragma once
#include "ProjectManager.h"
class SeniorManager : public ProjectManager
{
	std::vector<ProjectManager*> projectManagerList;
public:
	SeniorManager(int id, std::string name, double worktime, double payment);
	void addProjectManager(ProjectManager* person);	
	void onDeleteProjectManager(ProjectManager* person);
	void deleteProgectManagers();
	double calculateChiefPayment(double chiefPayment) override;
	std::vector<ProjectManager*> getProgectManager();

};