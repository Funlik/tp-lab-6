#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include"Company.h"
#include "emploee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personals.h"

using namespace std;
extern map <string, int> Projects;
int main()

{
	
	setProjects();
	

	
	vector <Employee*> employees;
	ifstream fileEmployees("employees.txt");
	if (!fileEmployees.is_open()) {
		cout << "NOOOOO WE CAN'T OPEN THE FILE NOOOOOOOO" << endl;
		return false;
	}
	else
	{
		enum professions {
			trainee,
			cleaner,
			driver,
			programmer,
			tester,
			team_leader,
			manager,
			project_manager,
			senior_manager,

		};
		professions pos_ID = trainee;
		int ID;

		while (fileEmployees >> ID) {
			string NAME, SURNAME, SECNAME, FIO, POSITION;
			fileEmployees >> NAME >> SURNAME >> SECNAME >> POSITION;
			FIO = NAME + " " + SURNAME + " " + SECNAME;


			if (POSITION == "Cleaner")				pos_ID = cleaner;
			else if (POSITION == "Driver")				pos_ID = driver;
			else if (POSITION == "ProjectManager")		pos_ID = project_manager;
			else if (POSITION == "Tester")				pos_ID = tester;
			else if (POSITION == "Manager")				pos_ID = manager;
			else if (POSITION == "TeamLeader")			pos_ID = team_leader;
			else if (POSITION == "SeniorManager")		pos_ID = senior_manager;
			else if (POSITION == "Programmer")			pos_ID = programmer;


			int worktime=40,// все работают по 40 часов в неделю
				base = 0, paymforhead = 0, numsub = 0;
			float interaction = 0.0;
			string project="";

			switch (pos_ID) {
				case cleaner:
				{
					
					fileEmployees >> base;
					employees.push_back(new Cleaner(ID, FIO, base));
					break;
				}
				case driver:
				{
					
					fileEmployees >> base;
					employees.push_back(new Driver(ID, FIO, base));
					break;
				}
				case tester:
				{

					fileEmployees >> base;
					fileEmployees >> interaction;
					fileEmployees >> project;
					employees.push_back(new Tester(ID, FIO, base, interaction, project));
					break;
				}
				case programmer:
				{

					fileEmployees >> base;
					fileEmployees >> interaction;
					fileEmployees >> project;
					employees.push_back(new Programmer(ID, FIO, base, interaction, project));
					break;
				}
				case team_leader:
				{

					fileEmployees >> base;
					fileEmployees >> interaction;
					fileEmployees >> project;
					fileEmployees >> paymforhead;
					fileEmployees >> numsub;

					employees.push_back(new TeamLeader(ID, FIO, base, interaction, project, paymforhead, numsub));
					break;
				}
				case manager:
				{

					fileEmployees >> interaction;
					fileEmployees >> project;
					
					

					employees.push_back(new Manager(ID, FIO, interaction, project));
					break;
				}
				case project_manager:
				{

					fileEmployees >> base;
					fileEmployees >> interaction;
					fileEmployees >> project;
					fileEmployees >> paymforhead;
					fileEmployees >> numsub;

					employees.push_back(new ProjectManager(ID, FIO, interaction, project, paymforhead, numsub));
					break;
				}
				case senior_manager:
				{

					fileEmployees >> base;
					fileEmployees >> interaction;
					
					fileEmployees >> paymforhead;
					fileEmployees >> numsub;

					employees.push_back(new SeniorManager(ID, FIO, interaction, paymforhead, numsub));
					break;
				}
			}

		}
		fileEmployees.close();
		for (unsigned int i = 0; i < employees.size(); i++)
		{
			employees[i]->setTime(40);
			employees[i]->CalcPayment();

			cout <<
				employees[i]->getID() << "  " <<
				employees[i]->getFIO() << "  " <<
				employees[i]->getPayment() << endl;

		}


	}
	system("pause");


}