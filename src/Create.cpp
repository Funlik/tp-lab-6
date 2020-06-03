#include "Create.h"

Factory::Factory()
{

}

Employee* Factory::make_employee(Information inf)
{
	if (inf.position == "Cleaner")			 return make_cleaner(inf.id, inf.name, inf.worktime, inf.base);
	if (inf.position == "Driver")			 return make_driver(inf.id, inf.name, inf.worktime, inf.base);
	if (inf.position == "Programmer")		 return make_programmer(inf.id, inf.name, inf.worktime, inf.base);
	if (inf.position == "Tester")			 return make_tester(inf.id, inf.name, inf.worktime, inf.base);
	if (inf.position == "TeamLeader")		 return make_team_leader(inf.id, inf.name, inf.worktime, inf.base);
	if (inf.position == "Manager")			 return make_manager(inf.id, inf.name, inf.worktime);
	if (inf.position == "ProjectManager")	 return make_project_manager(inf.id, inf.name, inf.worktime);
	if (inf.position == "SeniorManager")	 return make_senior_manager(inf.id, inf.name, inf.worktime);
	return nullptr;
}

Cleaner* Factory::make_cleaner(int id_, string name_, int worktime_, int base_)
{
	Cleaner* cleaner = new Cleaner(id_, name_, worktime_, base_);
	return cleaner;
}

Driver* Factory::make_driver(int id_, string name_, int worktime_, int base_)
{
	Driver* driver = new Driver(id_, name_, worktime_, base_);
	return driver;
}

Programmer* Factory::make_programmer(int id_, string name_, int worktime_, int base_)
{
	Programmer* programmer = new Programmer(id_, name_, worktime_, base_);
	return programmer;
}

Tester* Factory::make_tester(int id_, string name_, int worktime_, int base_)
{
	Tester* tester = new Tester(id_, name_, worktime_, base_);
	return tester;
}

TeamLeader* Factory::make_team_leader(int id_, string name_, int worktime_, int base_)
{
	TeamLeader* team_leader = new TeamLeader(id_, name_, worktime_, base_);
	return team_leader;
}

Manager* Factory::make_manager(int id_, string name_, int worktime_)
{
	Manager* manager = new Manager(id_, name_, worktime_);
	return manager;
}

ProjectManager* Factory::make_project_manager(int id_, string name_, int worktime_)
{
	ProjectManager* project_manager = new ProjectManager(id_, name_, worktime_);
	return project_manager;
}

SeniorManager* Factory::make_senior_manager(int id_, string name_, int worktime_)
{
	SeniorManager* senior_manager = new SeniorManager(id_, name_, worktime_);
	return senior_manager;
}
