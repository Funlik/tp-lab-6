#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
#include "factory.h"

using namespace std;

vector<string> split(const string& s, char delimiter)
{
	vector<string> words;
	string word;
	istringstream wordStream(s);
	while (getline(wordStream, word, delimiter))
		words.push_back(word);
	return words;
}

enum Pos_id { posCleaner = 0, posDriver, posTester, posProgrammer, posTeamLeader, posManager, posProjectManager, posSeniorManager };
map<string, int> projects;

Employee* Factory::createEmployee(vector<string> data)
{
	Employee* p = nullptr;
	string name, position;
	unsigned int emp_id, subordinates;
	Pos_id id;
	float base, koef, contribution;
	emp_id = atoi(data[0].c_str());
	name = data[1] + " " + data[2] + " " + data[3];
	position = data[4];
	if (position == "Cleaner")  id = posCleaner;
	if (position == "Driver")  id = posDriver;
	if (position == "Tester")  id = posTester;
	if (position == "Programmer")  id = posProgrammer;
	if (position == "TeamLeader")  id = posTeamLeader;
	if (position == "Manager")  id = posManager;
	if (position == "ProjectManager")  id = posProjectManager;
	if (position == "SeniorManager")  id = posSeniorManager;

	switch (id)
	{
	case posCleaner:
		base = stof(data[5]); //static_cast<float>(atoi(data[5].c_str()))
		p = new Cleaner(name, emp_id, base, position);
		break;

	case posDriver:
		base = stof(data[5]);
		koef = stof(data[6]);
		p = new Driver(name, emp_id, base, position, koef);
		break;

	case posTester:
		base = stof(data[5]);
		contribution = stof(data[7]);
		p = new Tester(name, emp_id, base, position, data[6], contribution);
		break;

	case posProgrammer:
		base = stof(data[5]);
		contribution = stof(data[7]);
		p = new Programmer(name, emp_id, base, position, data[6], contribution);
		break;

	case posTeamLeader:
		base = stof(data[5]);
		contribution = stof(data[7]);
		subordinates = atoi(data[8].c_str());
		p = new TeamLeader(name, emp_id, base, position, data[6], contribution, subordinates);
		break;

	case posManager:
		contribution = stof(data[6]);
		p = new Manager(name, emp_id, position, data[5], contribution);
		break;

	case posProjectManager:
		contribution = stof(data[6]);
		subordinates = atoi(data[7].c_str());
		p = new ProjectManager(name, emp_id, position, data[5], contribution, subordinates);
		break;

	case posSeniorManager:
		contribution = stof(data[6]);
		subordinates = atoi(data[7].c_str());
		p = new SeniorManager(name, emp_id, position, data[5], contribution, subordinates);
		break;
	}
	return p;
}