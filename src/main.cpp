#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Create.h"

#define cleaner_base 110
#define driver_base 160
#define programmer_base 270
#define tester_base 250
#define team_leader_base 300
#define Work_Time_ 120

static int id_ = 1;

using namespace std;

vector<string> split(const string & s, char delimiter)
{
	vector<string> Tokens;
	string Token;
	istringstream TokenStream(s);
	while (getline(TokenStream, Token, delimiter))
		Tokens.push_back(Token);
	return Tokens;
}

int main()
{
	ifstream file1("Employee.txt");
	vector<Employee*> empl = {};
	
	vector<string> position = {};
	Factory* factory = new Factory();
	Information inf;
	int i = 0;
	while (!file1.eof())
	{
		string buf;
		
		getline(file1, buf, '\n');
		vector<string> data = split(buf, ':');
		
		inf.id = id_;
		id_++;
		inf.name = data[0];
		inf.position = data[1];

		if (inf.position == "Cleaner")			inf.base = cleaner_base;
		if (inf.position == "Driver")			inf.base = driver_base;
		if (inf.position == "Programmer")		inf.base = programmer_base;
		if (inf.position == "Tester")			inf.base = tester_base;
		if (inf.position == "TeamLeader")		inf.base = team_leader_base;
		inf.worktime = Work_Time_;
		position.push_back(inf.position);
		empl.push_back(factory->make_employee(inf));
		i++;
	}
	ifstream file2("Projects.txt");
	vector<InfProject*> projects = {};
	while (!file2.eof())
	{
		string buf;
		int i = 0;
		getline(file2, buf, '\n');
		vector<string> data = split(buf, ';');
		InfProject* project = new InfProject(data[0], stoll(data[1]));
		i = 2;
		while (i < data.size())
		{
			
			if (data[i] == "Programmer")
			{
				project->num_programmer = stoi(data[++i]);
				project->per_programmer = stoi(data[++i]) / project->num_programmer;
				i++;
			}
			if (data[i]  == "Tester")
			{
				project->num_tester = stoi(data[++i]);
				project->per_tester = stoi(data[++i]) / project->num_programmer;
				i++;
			}
			if (data[i] == "TeamLeader")
			{
				project->num_team_leader = stoi(data[++i]);
				project->per_team_leader = stoi(data[++i]) / project->num_programmer;
				i++;
			}
			if (data[i] == "Manager")
			{
				project->num_manager = stoi(data[++i]);
				project->per_manager = stoi(data[++i]) / project->num_programmer;
				i++;
			}
			if (data[i] == "ProjectManager")
			{
				project->per_project_manger = stoi(data[++i]);
				i++;
			}
		}
		projects.push_back(project);
	}

	for (int i = 0; i < projects.size(); i++)
	{
		for (int j = 0; j < projects[i]->num_programmer; j++)
		{
			for (int k = 8; k < empl.size(); k++)
			if ((position[k] == "Programmer") && ((empl[k]->get_project()).empty()))
			{
				empl[k]->set_project(projects[i]);
				break;
			}
		}
		for (int j = 0; j < projects[i]->num_tester; j++)
		{
			for (int k = 8; k < empl.size(); k++)
			if ((position[k] == "Tester") && ((empl[k]->get_project()).empty()))
			{
				empl[k]->set_project(projects[i]);
				break;
			}
		}
		for (int j = 0; j < projects[i]->num_team_leader; j++)
		{
			for (int k = 8; k < empl.size(); k++)
			if ((position[k] == "TeamLeader") && ((empl[k]->get_project()).empty()))
			{
				empl[k]->set_project(projects[i]);
				break;
			}
		}
		for (int j = 0; j < projects[i]->num_manager; j++)
		{
			for (int k = 8; k < empl.size(); k++)
			if ((position[k] == "Manager") && ((empl[k]->get_project()).empty()))
			{
				empl[k]->set_project(projects[i]);
				break;
			}
		}

		for (int k = 8; k < empl.size(); k++)
		if ((position[k] == "ProjectManager") && ((empl[k]->get_project()).empty()))
		{
			empl[k]->set_project(projects[i]);
			break;
		}

		empl[51]->set_project(projects[i]);
	}

	cout << "|\tid\t|\t\t  name \t\t\t|\tposition \t|\tbase \t|\tproject name \t|\tsalary\t|\n";
	cout << "|---------------------------------------------------------------------------------------------------------------------------------------|\n";
	for (int i = 0; i < empl.size(); i++)
	{
		if (position[i] == "Cleaner")
		{
			empl[i]->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t " << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t\t|\t" << cleaner_base << "\t|\t -  \t\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "Driver")
		{
			empl[i]->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t\t|\t" << driver_base << "\t|\t -  \t\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "Programmer")
		{
			((Programmer*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t|\t" << programmer_base << "\t|\t" << (empl[i]->get_project())[0]->get_name_() << "\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "Tester")
		{
			((Tester*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t\t|\t" << tester_base << "\t|\t" << (empl[i]->get_project())[0]->get_name_() << "\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "TeamLeader")
		{
			((TeamLeader*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t|\t" << team_leader_base << "\t|\t" << (empl[i]->get_project())[0]->get_name_() << "\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "Manager")
		{
			((Manager*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t\t|\t-  \t|\t" << (empl[i]->get_project())[0]->get_name_() << "\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
		if (position[i] == "ProjectManager")
		{
			((ProjectManager*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t|\t-  \t|\t" << (empl[i]->get_project())[0]->get_name_() << "\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
	
		if (position[i] == "SeniorManager")
		{
			((SeniorManager*)empl[i])->calc();
			cout << "|\t" << empl[i]->get_id() << "\t|\t" << empl[i]->get_name() << "\t\t|\t" << position[i] << "\t|\t-  \t|\t  -  \t\t|\t" << empl[i]->get_payment() << "\t|\n";
		}
	}
	cout << "|_______________________________________________________________________________________________________________________________________|\n";

	return 0;
}
