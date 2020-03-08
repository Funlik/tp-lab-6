#include "Factory.h"
#include "Interfaces.h"

std::vector<std::string> split(const std::string& s, char delimiter) {
	std::stringstream ss(s);
	std::string buf;
	std::vector<std::string> rowData;
	while (std::getline(ss, buf, delimiter)) {
		rowData.push_back(buf);
	}
	return rowData;
}

ProjectStruct find_project(std::string projectName) {
	for (auto project : PROJECTS)
		if (project.projectName == projectName) {
			return project;
		}
}

void Factory::createFactory()
{
	std::ifstream file("inf.txt");
	std::string line;
	if (file.is_open()) {
		while (getline(file, line)) {
			std::vector<std::string> row_data;
			row_data = split(line, ',');
			if (std::find(row_data.begin(), row_data.end(), "Cleaner") != row_data.end()) {
				Cleaner* cleaner = new Cleaner(std::stof(row_data[0]), row_data[1], std::stoi(row_data[3]));
				employees.push_back(cleaner);
				//std::cout << "Cleaner   " << row_data[0] << " " << row_data[1] << " " << row_data[3] << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "Driver") != row_data.end()) {
				Driver* driver = new Driver(std::stoi(row_data[0]), row_data[1], std::stoi(row_data[3]));
				employees.push_back(driver);
				//std::cout << "Driver   " << row_data[0] << " " << row_data[1] << " " << row_data[3] << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "Programmer") != row_data.end()) {
				Programmer* programmer = new Programmer(std::stoi(row_data[0]), row_data[1], std::stoi(row_data[5]), std::stof(row_data[4]), &find_project(row_data[3]));
				employees.push_back(programmer);
				//std::cout << "Programmer   " << row_data[0] << " " << row_data[1] << " " << row_data[5] << " " << row_data[4] << " " << find_project(row_data[3])->projectName << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "Tester") != row_data.end()) {
				Tester* tester = new Tester(std::stoi(row_data[0]), row_data[1], std::stoi(row_data[5]), std::stof(row_data[4]), &find_project(row_data[3]));
				employees.push_back(tester);
				//std::cout << "Tester   " << row_data[0] << " " << row_data[1] << " " << row_data[5] << " " << row_data[4] << " " << find_project(row_data[3]).projectName << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "TeamLeader") != row_data.end()) {
				TeamLeader* team_leader = new TeamLeader(std::stoi(row_data[0]), row_data[1], std::stoi(row_data[5]), std::stof(row_data[4]), &find_project(row_data[3]), std::stoi(row_data[6]));
				employees.push_back(team_leader);
				//std::cout << "TeamLeader   " << row_data[0] << " " << row_data[1] << " " << row_data[5] << " " << row_data[4] << " " << find_project(row_data[3]).projectName << " " << row_data[6] << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "Manager") != row_data.end()) {
				Manager* manager = new Manager(stoi(row_data[0]), row_data[1], stof(row_data[4]), &find_project(row_data[3]));
				employees.push_back(manager);
				//std::cout << "Manager   " << row_data[0] << " " << row_data[1] << " " << row_data[4] << " " << find_project(row_data[3]).projectName << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "ProjectManager") != row_data.end()) {
				ProjectManager* project_manager = new ProjectManager(std::stoi(row_data[0]), row_data[1], std::stof(row_data[4]), &find_project(row_data[3]), std::stoi(row_data[5]));
				employees.push_back(project_manager);
				//std::cout << "ProjectManager   " << row_data[0] << " " << row_data[1] << " " << row_data[4] << " " << find_project(row_data[3]).projectName << " " << row_data[5] << std::endl;
			}
			if (std::find(row_data.begin(), row_data.end(), "SeniorManager") != row_data.end()) {
				SeniorManager* senior_manager = new SeniorManager(std::stoi(row_data[0]), row_data[1], std::stof(row_data[3]), &find_project("MediaSDK"), std::stoi(row_data[4]));
				employees.push_back(senior_manager);
				//std::cout << "SeniorManager   " << row_data[0] << " " << row_data[1] << " " << row_data[3] << " " << row_data[4] << std::endl;
			}
		}
	}

	for (auto employee : employees) {
		std::cout << employee->get_id() << " " << employee->get_FIO() << " " << employee->get_salary() << std::endl;
	}

	std::ofstream out;
	out.open("out.txt", std::ios::app);
	if (out.is_open())
	{
		for (auto employee : employees) {
			out << employee->get_id() << " " << employee->get_FIO() << " " << employee->get_salary() << std::endl;
		}
	}
	out.close();
}