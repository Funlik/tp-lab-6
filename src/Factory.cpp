#include "Factory.h"
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"


Employee * Factory::createEmployee(vector<string> parameters)
{
	Employee *emp;
	vector<string> projects;
	vector<float> ratio;
	vector<int> budget;
	int projectsNum;
	switch (stoi(parameters[0]))
	{
	case Cleaner_ID:
		emp = new Cleaner(stoi(parameters[1]), parameters[2], stoi(parameters[3]));
		break;

	case Driver_ID:
		emp = new Cleaner(stoi(parameters[1]), parameters[2], stoi(parameters[3]));
		break;
	case Programmer_ID:
		
		projects.push_back(parameters[4]);
		
		ratio.push_back(stof(parameters[5]));
		
		budget.push_back(stoi(parameters[6]));
		emp = new Programmer(stoi(parameters[1]), parameters[2], stoi(parameters[3]), projects, ratio, budget);
		break;
	case Tester_ID:

		projects.push_back(parameters[4]);

		ratio.push_back(stof(parameters[5]));

		budget.push_back(stoi(parameters[6]));
		emp = new Tester(stoi(parameters[1]), parameters[2], stoi(parameters[3]), projects, ratio, budget);
		break;
	case TeamLeader_ID:

		projects.push_back(parameters[4]);

		ratio.push_back(stof(parameters[5]));

		budget.push_back(stoi(parameters[6]));
		emp = new TeamLeader(stoi(parameters[1]), parameters[2], stoi(parameters[3]), projects, ratio, budget,stoi(parameters[7]));
		break;
	case Manager_ID:

		projects.push_back(parameters[3]);

		ratio.push_back(stof(parameters[4]));

		budget.push_back(stoi(parameters[5]));
		emp = new Manager(stoi(parameters[1]), parameters[2], projects, ratio, budget);
		break;
	case ProjectManager_ID:

		projects.push_back(parameters[3]);

		ratio.push_back(stof(parameters[4]));

		budget.push_back(stoi(parameters[5]));
		emp = new ProjectManager(stoi(parameters[1]), parameters[2], projects, ratio, budget,stoi(parameters[6]));
		break;
	case SeniorManager_ID:

		projectsNum = stoi(parameters[3]);
		for (int i = 0; i < projectsNum; i++)
		{
			projects.push_back(parameters[4+i]);
			ratio.push_back(stof(parameters[4+projectsNum+i]));
			budget.push_back(stoi(parameters[4+2*projectsNum+i]));
		}
		emp = new SeniorManager(stoi(parameters[1]), parameters[2], projects, ratio, budget, stoi(parameters[4+projectsNum*3]));
		break;
	default:
		return nullptr;
	}

	return emp;
}