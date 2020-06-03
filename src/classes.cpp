#include "classes.h"

std::vector<std::string> split(const std::string& s, char delimiter)
{
	std::vector<std::string>tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

void Factory::create_employee()
{
	std::ifstream file("input.txt");
	system("chcp 65001");
	while (!file.eof())
	{
		std::string buf;
		getline(file, buf, '\n');
		std::vector<std::string> data = split(buf, ':');

		if (data[2] == "Programmer")
		{
			Programmer *p=new Programmer();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->paiment = stoi(data[3]);
			p->project = data[4];
			p->part = stoi(data[5]);
			Factory::emp.push_back(p);
		}
		else if(data[2] == "Cleaner")
		{
			Cleaner *p = new Cleaner();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->paiment = stoi(data[3]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "Driver")
		{
			Driver *p = new Driver();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->paiment = stoi(data[3]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "Tester")
		{
			Tester *p = new Tester();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->paiment = stoi(data[3]);
			p->project = data[4];
			p->part = stoi(data[5]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "TeamLeader")
		{
			TeamLeader *p = new TeamLeader();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->paiment = stoi(data[3]);
			p->project = data[4];
			p->part = stoi(data[5]);
			p->heads = stoi(data[6]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "Manager")
		{
			Manager *p = new Manager();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->project = data[3];
			p->part = stoi(data[4]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "ProjectManager")
		{
			ProjectManager *p = new ProjectManager();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->project = data[3];
			p->part = stoi(data[4]);
			p->heads = stoi(data[5]);
			Factory::emp.push_back(p);
		}
		else if (data[2] == "SeniorManager")
		{
			SeniorManager *p = new SeniorManager();
			p->id = stoi(data[0]);
			p->name = data[1];
			p->position = data[2];
			p->part = stoi(data[3]);
			p->heads = stoi(data[4]);
			Factory::emp.push_back(p);
		}

	}
}