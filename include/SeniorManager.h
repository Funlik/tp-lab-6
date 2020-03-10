#ifndef SeniorManager_H
#define SeniorManager_H

#include <vector>
#include "ProjectManager.h"
#include "Heading.h"

class SeniorManager : public ProjectManager, public Heading
{
private:
	std::vector <ProjectManager*> listProjectManagers;
public:
	SeniorManager(int id, std::string name, int worktime, int percent);

	std::vector <ProjectManager*> getProjectManagers();

	void addProjectManager(ProjectManager* human);
	//void deleteProjectManager(ProjectManager* human);

	virtual double calculateHeadingPayment(int leaderRate);
};
#endif