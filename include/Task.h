#include <map>
#include <string>
#ifndef TASK_H
#define TASK_H

class Task {
private:
	std::string name;
	std::map<std::string, int> members;
	int counter;
	int cost;
public:
	Task(std::string projectName, int cost);
	void addMember(std::string name, int contribution);
	int countContribution(std::string name);
	int getCost();
	int getSize();
};

#endif