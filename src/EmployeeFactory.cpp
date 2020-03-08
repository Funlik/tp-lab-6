#include <sstream>
#include "Cleaner.h"
#include "Driver.h"
#include "EmployeeFactory.h"
#include "Manager.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"

std::string GetEmployeePositionName(EmployeePosition position)
{
	switch (position)
	{
		case EmployeePosition::Cleaner:         return "Cleaner";
		case EmployeePosition::Driver:          return "Driver";
		case EmployeePosition::Programmer:      return "Programmer";
		case EmployeePosition::Tester:          return "Tester";
		case EmployeePosition::TeamLeader:      return "TeamLeader";
		case EmployeePosition::Manager:         return "Manager";
		case EmployeePosition::ProjectManager:  return "ProjectManager";
		case EmployeePosition::SeniorManager:   return "SeniorManager";
		default:                                return "";
	}
}

std::vector<std::string> Split(std::string &str, char separator)
{
	std::vector<std::string> substrings;
	std::istringstream splitStream(str);
	std::string newSubstring;
	while (std::getline(splitStream, newSubstring, separator))
		substrings.push_back(newSubstring);
	return substrings;
}

EmployeeFactoryEntity EmployeeFactoryEntity::Parse(std::string str)
{
	std::vector<std::string> substrings = Split(str, ';');
	EmployeeFactoryEntity entity;
	entity.id = std::stoi(substrings[0]);
	entity.name = substrings[1];
	entity.worktime = std::stoi(substrings[2]);
	entity.position = (EmployeePosition)std::stoi(substrings[3]);
	for (uint32_t i = 4; i < substrings.size(); i++)
		entity.additionalParameters.push_back(substrings[i]);
	return entity;
}

Employee *EmployeeFactory::CreateEmployee(EmployeeFactoryEntity entity)
{
	switch (entity.position)
	{
		case EmployeePosition::Cleaner:
			return new Cleaner(entity.id, entity.name, entity.worktime);
		case EmployeePosition::Driver:
			return new Driver(entity.id, entity.name, entity.worktime);
		case EmployeePosition::Programmer:
			return new Programmer(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]));
		case EmployeePosition::Tester:
			return new Tester(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]));
		case EmployeePosition::TeamLeader:
			return new TeamLeader(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]),
				std::stoi(entity.additionalParameters[2]), std::stoi(entity.additionalParameters[3]));
		case EmployeePosition::Manager:
			return new Manager(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]));
		case EmployeePosition::ProjectManager:
			return new ProjectManager(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]),
				std::stoi(entity.additionalParameters[2]), std::stoi(entity.additionalParameters[3]));
		case EmployeePosition::SeniorManager:
			return new SeniorManager(entity.id, entity.name, entity.worktime,
				std::stoi(entity.additionalParameters[0]), std::stof(entity.additionalParameters[1]),
				std::stoi(entity.additionalParameters[2]), std::stoi(entity.additionalParameters[3]));
		default:
			return nullptr;
	}
}
