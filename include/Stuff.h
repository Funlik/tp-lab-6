#ifndef STUFF_H
#define STUFF_H

#include <vector>
#include <string>
#include <sstream>
#include <map>

//static std::vector<std::string>parse(std::string& baseString) {
//	std::istringstream parsing(baseString);
//	std::vector<std::string>result;
//	std::string s = "";
//	while (std::getline(parsing, s, ';')) {
//		result.push_back(s);
//	}
//	return result;
//}

struct Stuff
{	
	std::string type = "";
	int id = 0;
	std::string name = "";
	int worktime = 0;
	int base = 0;
	std::string projectName = "";
	double percent = 0;
	int projectBudget = 0;
	int headingBase = 0;
	double overtimeCorfficient = 0;
	Stuff(std::string& baseString, std::string* valueType = nullptr);
	Stuff(std::string type, int id, std::string name, int worktime, int base, std::string projectName, int projectBudget, double percent, int headingBase, double overtimeCorfficient);
};

#endif // !STUFF_H
