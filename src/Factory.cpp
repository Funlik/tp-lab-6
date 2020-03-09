#include "Factory.h"

int id = 0;
int worktime = 70;
int budget = 0;
enum specID{_Cleaner = 0, _Driver, _Tester, _Programmer, _TeamLeader, _Manager, _ProjectManager, _SeniorManager};

Factory::Factory(std::vector<Projects*> projects) {
	this->projects = projects;
}

Employee* Factory::create(std::vector<std::string> data) {
	id++;
	int position;
	budget = 0;
	if (data[1] == "Cleaner") position = _Cleaner;
	if (data[1] == "Driver") position = _Driver;
	if (data[1] == "Tester") position = _Tester;
	if (data[1] == "Programmer") position = _Programmer;
	if (data[1] == "TeamLeader") position = _TeamLeader;
	if (data[1] == "Manager") position = _Manager;
	if (data[1] == "ProjectManager") position = _ProjectManager;
	if (data[1] == "SeniorManager") position = _SeniorManager;

	switch (position) {
	case _Cleaner: // Aiesha Morin:Cleaner:130
		return new Cleaner(id, data[0], worktime, stoi(data[2]));

	case _Driver: // Sumaiya Barnett:Driver:210
		return new Driver(id, data[0], worktime, stoi(data[2]));

	case _Tester: // Shannon Mays:Tester:0.1:1100:project_2
		//int budget = 0;
		for (auto project : projects)
			if (project->get_project_name() == data[4])
				budget = project->get_budget();

		return new Tester(id, data[0], worktime, stoi(data[3]), stof(data[2]), data[4], budget);

	case _Programmer: // Lorena Church:Programmer:0.2:600:project_2
		//budget = 0;
		for (auto project : projects)
			if (project->get_project_name() == data[4])
				budget = project->get_budget();

		return new Programmer(id, data[0], worktime, stoi(data[3]), stof(data[2]), data[4], budget);


	case _TeamLeader: //Deacon Lara:TeamLeader:0.2:1500:project_3:3
		//budget = 0;
		for (auto project : projects)
			if (project->get_project_name() == data[4])
				budget = project->get_budget();
		return new TeamLeader(id, data[0], worktime, stoi(data[3]), stof(data[2]), data[4], budget, stoi(data[5]));

	case _Manager: // Todd Huang:Manager:0.3:project_3
		//budget = 0;
		for (auto project : projects)
			if (project->get_project_name() == data[3])
				budget = project->get_budget();
		return new Manager(id, data[0], worktime, stof(data[2]), budget, data[3]);

	case _ProjectManager: // Franklyn Ryan:ProjectManager:0.1:project_2:5
		//budget = 0;
		for (auto project : projects)
			if (project->get_project_name() == data[3])
				budget = project->get_budget();
		return new ProjectManager(id, data[0], worktime, stof(data[2]), budget, data[3], stoi(data[4]));

	case _SeniorManager: // Regina Mccartney:SeniorManager:0.1:17
		//budget = 0;
		for (auto project : projects)
			budget += project->get_budget();
		return new SeniorManager(id, data[0], worktime, stof(data[2]), budget, stoi(data[3]));
	}
}