#include "Factory.h"



Factory::Factory(string managerPath, string personalPath)
{
	this->managerPath = managerPath;
	this->personalPath = personalPath;
}


Factory::~Factory()
{
}

Engineer* Factory::CreateEngineer(fstream& file, string type)
{
	string name;
	int id;
	int payment;
	int worktime;
	int part;
	if (type == "Tester")
	{
		file >> name >> id >> worktime >> payment;
		return new Tester(name, id, worktime, payment);
	}
	else
	{

		file >> name >> id >> worktime >> payment >> part;
		return new Programmer(name, id, worktime, payment, part);
	}
}

Project* Factory::CreateProject(fstream& file)
{
	string name;
	int id;
	int payment;
	int worktime;
	int part;
	file >> name;
	Project* project = new Project(name);
	file >> name >> name >> id >> worktime >> payment >> part;
	project->setProjectManager(new ProjectManager(name, id, worktime, payment, project, part));
	return project;
}

Manager* Factory::LoadManager()
{
	string name;
	int id;
	int payment;
	fstream file(managerPath, ios_base::in);
	string str;
	file >> str >> name >> id >> payment;
	Manager* manager = new Manager(name, id, payment);
	Project* project = 0;
	while (!file.eof())
	{
		file >> str;
		if (str == "Project")
		{
			if (project != 0)
				manager->addProject(project);
			project = CreateProject(file);
		}
		else 
		{
			Engineer* eng = CreateEngineer(file, str);
			eng->setProject(project);
			project->addEngineer(eng);
		}
	}
	if (project != 0)
		manager->addProject(project);
	file.close();
	return manager;
}

vector<Personal*> Factory::LoadPersonal()
{
	string name;
	int id;
	int worktime;
	int payment;
	fstream file(personalPath, ios_base::in);
	vector<Personal*> vec;
	while (!file.eof())
	{
		file >> name >> id >> worktime >> payment;
		vec.push_back(new Personal(name, id, payment, worktime));
	}
	file.close();
	return vec;
}
