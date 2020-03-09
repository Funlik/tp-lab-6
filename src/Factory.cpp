#include "Factory.h"
#include "Personal.h"
#include "Manager.h"
#include "Engineer.h"

map<string, int> projects;

enum Employee_ID { Cleaner_ID = 0, Driver_ID, Programmer_ID, Tester_ID,
	TeamLeader_ID, Manager_ID, ProjectManager_ID, SeniorManager_ID };

Factory::Factory() {}

void Factory::create_employees(string file_name) {
	Employee* p = nullptr;
	Employee_ID employee_id;
	int id, worktime, base, employeesNumber;
	string fio, project;
	float contribution;

	ifstream file(file_name);
	
	if (file.is_open()) {
		string buf;
		vector<string> data;
		while (getline(file, buf)) {
			data = split(buf, ',');
			id = atoi(data[0].c_str());
			fio = data[1];
			if (data[2] == "Cleaner")  employee_id = Cleaner_ID;
			if (data[2] == "Driver")  employee_id = Driver_ID;
			if (data[2] == "Tester")  employee_id = Tester_ID;
			if (data[2] == "Programmer")  employee_id = Programmer_ID;
			if (data[2] == "TeamLeader")  employee_id = TeamLeader_ID;
			if (data[2] == "Manager")  employee_id = Manager_ID;
			if (data[2] == "ProjectManager")  employee_id = ProjectManager_ID;
			if (data[2] == "SeniorManager")  employee_id = SeniorManager_ID;
			switch (employee_id) {
			case Cleaner_ID:
				worktime = atoi(data[3].c_str());
				base = atoi(data[4].c_str());
				p = new Cleaner(id, fio, worktime, base);
				break;

			case Driver_ID:
				worktime = atoi(data[3].c_str());
				base = atoi(data[4].c_str());
				p = new Driver(id, fio, worktime, base);
				break;

			case Programmer_ID:
				worktime = atoi(data[3].c_str());
				base = atoi(data[4].c_str());
				project = data[5];
				contribution = stof(data[6]);
				p = new Programmer(id, fio, worktime, base, project, contribution);
				break;

			case Tester_ID:
				worktime = atoi(data[3].c_str());
				base = atoi(data[4].c_str());
				project = data[5];
				contribution = stof(data[6]);
				p = new Tester(id, fio, worktime, base, project, contribution);
				break;

			case TeamLeader_ID:
				worktime = atoi(data[3].c_str());
				base = atoi(data[4].c_str());
				project = data[5];
				contribution = stof(data[6]);
				employeesNumber = atoi(data[7].c_str());
				p = new TeamLeader(id, fio, worktime, base, project, contribution, employeesNumber);
				break;

			case Manager_ID:
				project = data[3];
				contribution = stof(data[4]);
				p = new Manager(id, fio, project, contribution);
				break;

			case ProjectManager_ID:
				project = data[3];
				contribution = stof(data[4]);
				employeesNumber = atoi(data[5].c_str());
				p = new ProjectManager(id, fio, project, contribution, employeesNumber);
				break;

			case SeniorManager_ID:
				project = data[3];
				contribution = stof(data[4]);
				employeesNumber = atoi(data[5].c_str());
				p = new SeniorManager(id, fio, project, contribution, employeesNumber);
				break;
	
			}
			employees.push_back(p);
		}
	}
	file.close();
}

vector<string> split(const string& s, char delimiter) {
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

void Factory::create_projects(string file_name) {
	ifstream file(file_name);
	if (file.is_open()) {
		string buf;
		vector<string> data;
		while (getline(file, buf)) {
			data = split(buf, ' ');
			projects[data[0]] = atoi(data[1].c_str());
		}
	}
	file.close();
}

void Factory::print_information() {
	for (auto employee : employees) {
		string position = employee->get_position();
		cout << "Employee: " << employee->get_name() << ", position: " << position << "\n";
		employee->set_payment();
		if (position == "Manager" or position == "ProjectManager" or position == "SeniorManager")
			cout << "Employee's salary is " << employee->get_payment() << "$\n";
		else
			cout << "Employee's worktime is " << employee->get_worktime() << " and his salary is " << employee->get_payment() << "$\n";
		cout << "_________________________________________________\n";
	}
}