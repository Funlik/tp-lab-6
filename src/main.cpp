#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include "class.h"

std::vector <std::string> projects = { "Proj1", "Proj2", "Proj3" };

int Search(std::string name_project)
{
	for (int i = 0; i < 3; i++)
	{
		if (name_project == projects[i])
			return i;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::ifstream file;
	file.open("workers.txt");

	std::vector <int> money_project = { 1000000, 2000000, 1500000 };
	std::vector <Employee*> list;
	int id;
	std::string fio;
	int worktime = 31;
	int base;
	int bonus;
	double procent;
	std::string project;
	std::string post;
	int number_people;
	int money_for_people = 1000;

	while (file >> id >> fio >> post)
	{
		if (post == "Cleaner")
		{
			file >> base;
			list.push_back(new Cleaner(id, fio, worktime, base));
		}
		else if (post == "Driver")
		{
			file >> base >> bonus;
			list.push_back(new Driver(id, fio, worktime, base, bonus));
		}
		else if (post == "Enginer")
		{
			file >> base >> project >> procent;

			list.push_back(new Enginer(id, fio, worktime, base, project, procent, money_project[Search(project)]));
		}
		else if (post == "Programmer")
		{
			file >> base >> project >> procent;
			list.push_back(new Programmer(id, fio, worktime, base, project, procent, money_project[Search(project)]));
		}
		else if (post == "Tester")
		{
			file >> base >> project >> procent;
			list.push_back(new Tester(id, fio, worktime, base, project, procent, money_project[Search(project)]));
		}
		else if (post == "TeamLeader")
		{
			file >> base >> project >> procent >> number_people;
			list.push_back(new TeamLeader(id, fio, worktime, base, project, procent, money_project[Search(project)], number_people, money_for_people));
		}
		else if (post == "Manager")
		{
			file >> project >> procent;
			list.push_back(new Manager(id, fio, worktime, project, procent, money_project[Search(project)]));
		}
		else if (post == "ProjectManager")
		{
			file >> project >> procent >> number_people;
			list.push_back(new ProjectManager(id, fio, worktime, project, procent, money_project[Search(project)], number_people, money_for_people));
		}
		else if (post == "SeniorManager")
		{
			file >> project >> procent >> number_people;
			list.push_back(new SeniorManager(id, fio, worktime, project, procent, money_project[0] + money_project[1] + money_project[2], number_people, money_for_people));
		}
	}

	int size = list.size();

	printf("Čňîăîâŕ˙ çŕđďëŕňŕ çŕ ěĺń˙ö:\n");
	for (int i = 0; i < size; i++)
	{
		list[i]->Calc();
		printf("ID %d %s = %f\n", list[i]->ID(), list[i]->FIO().c_str(), list[i]->PAYMENT());
	}

}
