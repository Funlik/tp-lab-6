#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
protected:
	std::vector<ProjectManager*>subProjectManagers;
	std::vector<TeamLeander*>subTeamLeaders;
public:
	SeniorManager(int id, std::string name, std::string projectName, int projectBudget, double percent,int headingBase) :
		ProjectManager(id, name, projectName, projectBudget, percent, headingBase) {}
	std::vector<ProjectManager*> getSubProjectManagers() {
		return subProjectManagers;
	}
	void addSubProjectManagers(ProjectManager* projectManager) {
		subProjectManagers.push_back(projectManager);
		calc();
	}
	std::vector<TeamLeander*> getSubTeamLeaders() {
		return subTeamLeaders;
	}
	void addSubTeamLeaders(TeamLeander* teamLeader) {
		subTeamLeaders.push_back(teamLeader);
		calc();
	}
	virtual void calc() override {
		payment = calcProject(percent, projectBudget);
		payment += calcHeading(headingBase, subProgrammers.size() + subTesters.size() + subManagers.size() + subProjectManagers.size() + subTeamLeaders.size());
	}
};

#endif // !SENIORMANAGER_H
