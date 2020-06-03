#ifndef ProjectManager_H
#define ProjectManager_H

#include <vector>
#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading
{
protected:
	std::vector <Manager*> listManagers;
public:
	ProjectManager(int id, std::string name, int worktime, int baseRate);

	virtual double calculateHeadingPayment(int leaderRate);

	void addManager(Manager* human);

	void calc();	// unuse
	void calc(int budjet, int percent, int leaderRate);
};
#endif