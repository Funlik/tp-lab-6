#include "Source.h"


vector<string> split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}


void perform_file(const string& filename)
{
	ifstream file(filename);
	int k = 0;
	vector<Employee> workers;
	string buf;
	system("chcp 1251");
	if (file.is_open()) {
		getline(file, buf, '\n');
		vector<string> data = split(buf, '_');
		Project myproject = { data[0],atoi(data[1].c_str()) };
		while (!file.eof()) {
			getline(file, buf, '\n');
			vector<string> data = split(buf, '_');
			if (data[1] == "cleaner")
			{
				Cleaner cleaner(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()));
				workers.push_back(cleaner);
				//cout << "Cleaner created\n" << endl;
			}
			if (data[1] == "driver")
			{
				Driver driver(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()));
				workers.push_back(driver);
				//cout << "Driver created\n" << endl;
			}
			if (data[1] == "programmer")
			{
				Programmer programmer(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()));
				programmer.add_project(&myproject, atoi(data[4].c_str()));
				myproject.addpeopletoproject(programmer);
				workers.push_back(programmer);
				//cout << "Programmer created\n" << endl;
			}
			if (data[1] == "tester")
			{
				Tester tester(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()));
				tester.add_project(&myproject, atoi(data[4].c_str()));
				myproject.addpeopletoproject(tester);
				workers.push_back(tester);
				//cout << "Tester created\n" << endl;
			}
			if (data[1] == "teamleader")
			{
				TeamLeader teamleader(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()), atoi(data[4].c_str()));
				teamleader.add_project(&myproject);
				workers.push_back(teamleader);
				myproject.addpeopletoproject(teamleader);
				//cout << "TeamLeader created\n" << endl;
			}
			if (data[1] == "manager")
			{
				Manager manager(k, data[0]);
				manager.add_project(&myproject, atoi(data[2].c_str()));
				myproject.addpeopletoproject(manager);
				workers.push_back(manager);
				//cout << "Manager created\n" << endl;
			}
			if (data[1] == "projectmanager")
			{
				ProjectManager projectmanager(k, data[0], atoi(data[2].c_str()), atoi(data[3].c_str()));
				projectmanager.add_project(&myproject);
				workers.push_back(projectmanager);
				//cout << "ProjectManager created\n" << endl;
			}

			if (data[1] == "seniormanager")
			{
				SeniorManager seniormanager(k, data[0], atoi(data[2].c_str()));
				workers.push_back(seniormanager);
				//cout << "SeniorManager created\n" << endl;
			}
			k++;
		}
		file.close();
	}
	/*for (auto worker : workers)
	{
		cout << worker.get_name() << " " << worker.get_profession() << " "<< worker.get_id() << " "<<endl;
	}*/
}