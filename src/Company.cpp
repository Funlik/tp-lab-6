#include "Company.h"
#include <iostream>
#include <sstream>
#include <fstream>

Company::Company()
{

}

void Company::ReadFile()
{
	std::ifstream file("staff.txt");

	if (!file)
	{
		std::cout << "File was not found!" << std::endl;
		return;
	}

	std::string s;

	while (!file.eof())
	{
		std::getline(file, s);

		if (s == "")
		{
			file.close();
			std::cout << "File is ok" << std::endl;
			std::cout << std::endl;
			return;
		}

		std::vector<std::string> info = split(s, ':');

		if (info.size() == 2)
		{
			Projects* project = new Projects(info[0], atoi(info[1].c_str()));
			projects.push_back(project);
		}
		else
		{
			if (info[2] == "cleaner")
			{
				Cleaner* cleaner = new Cleaner(atoi(info[0].c_str()), info[1], info[2], atof(info[4].c_str()), atoi(info[3].c_str()), NULL);
				AllPersonal.push_back(cleaner);
			}
			if (info[2] == "driver")
			{
				Driver* driver = new Driver(atoi(info[0].c_str()), info[1], info[2], atof(info[4].c_str()), atoi(info[3].c_str()), NULL);
				AllPersonal.push_back(driver);
			}
			if (info[2] == "programmer")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						Programmer* programmer = new Programmer(atoi(info[0].c_str()), info[1], info[2],
																atof(info[4].c_str()), atoi(info[3].c_str()),
																atof(info[6].c_str()), project);
						AllPersonal.push_back(programmer);
						project->AddEmployee(programmer);
					}
			}
			if (info[2] == "tester")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						Tester* tester = new Tester(atoi(info[0].c_str()), info[1], info[2], atof(info[4].c_str()),
													atoi(info[3].c_str()), atof(info[6].c_str()), project);
						AllPersonal.push_back(tester);
					}
			}
			if (info[2] == "teamLeader")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						TeamLeader* lead = new TeamLeader(atoi(info[0].c_str()), info[1], info[2], atof(info[4].c_str()),
														  atoi(info[3].c_str()), atof(info[6].c_str()), project, atoi(info[5].c_str()));
						AllPersonal.push_back(lead);
						project->AddEmployee(lead);
					}
			}
			if (info[2] == "manager")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						Manager* manager = new Manager(atoi(info[0].c_str()), info[1], info[2], atof(info[4].c_str()),
													   atof(info[6].c_str()), project);
						AllPersonal.push_back(manager);
						project->AddEmployee(manager);
					}
			}
			if (info[2] == "projectManager")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						ProjectManager* prmanager = new ProjectManager(atoi(info[0].c_str()), info[1], info[2],
																	   atof(info[4].c_str()), atof(info[6].c_str()),
																	   project, atoi(info[5].c_str()));
						AllPersonal.push_back(prmanager);
						project->AddEmployee(prmanager);
					}
			}
			if (info[2] == "seniorManager")
			{
				for (Projects* project : projects)
					if (project->GetTitle() == info[7])
					{
						SeniorManager* seniormanager = new SeniorManager(atoi(info[0].c_str()), info[1], info[2],
																		 atof(info[4].c_str()), atof(info[6].c_str()),
																		 project, atoi(info[5].c_str()));
						AllPersonal.push_back(seniormanager);
						project->AddEmployee(seniormanager);
					}
			}
		}
	}
};

void Company::ShowAllInformation()
{
	for (Projects* project : projects)
		project->ShowAllInformation();
	std::cout << std::endl;
	for (Employee* p : AllPersonal)
		p->GetAllInformation();
}

std::vector<std::string> Company::split(const std::string& s, char delimiter)
{
	std::vector<std::string> result;
	std::string token;
	std::istringstream tokenStream(s);

	while (std::getline(tokenStream, token, delimiter))
	{
		result.push_back(token);
	}

	return result;
}