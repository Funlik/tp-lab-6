#include "gtest/gtest.h"
#include<iostream>
#include <fstream>
#include<string>
#include<vector>
#include "personal.h"
#include "engineer.h"
#include "manager.h"
#include "employee.h"
using namespace std;

vector<Employee*> main_action(const std::string& filename){
	vector <Employee *> workers;
	vector <string> projects;
	vector <int> funds;
	int id;
	string name;
	int worktime;
	string position;
	int rate;
	int overtime;
	string project;
	int fund;
	double part;
	int people;
	ifstream fin(filename);
	ifstream proj("project.txt");
	int i = 0;
	while (!proj.eof()){	
			proj >> project;
			projects.push_back(project);
			proj >> fund;
			funds.push_back(fund);
			cout << projects[i] << "  " << funds[i] << endl;
			i++;
	}
	fund = 0;
	int num=0;
	while (fin >> id>> name>> position>> worktime) {
		num++;
		if (position == "Cleaner"){
			fin >> rate;
			workers.push_back(new Cleaner(id, name, worktime, rate));
		}
		if (position == "Driver"){
			fin >> rate;
			fin >> overtime;
			workers.push_back(new Driver(id, name, worktime, rate,overtime));
		}
		if (position == "Programmer"){
			fin >> rate;
			fin >> project;
			fin >> part;
			for (int j = 0; j < 2;j++)
			if (project == projects[j]){
				fund=funds[j];
				break;
			}
			workers.push_back(new Programmer(id, name, worktime, rate, part,fund));
		}
		if (position == "Tester"){
			fin >> rate;
			fin >> project;
			fin >> part;
			for (int j = 0; j < i; j++)
			if (project == projects[j]){
				fund = funds[j];
				break;
			}
			workers.push_back(new Tester(id, name, worktime, rate, part, fund));
		}
		if (position == "TeamLeader"){
			fin >> rate;
			fin >> project;
			fin >> part;
			fin >> people;
			for (int j = 0; j < i; j++)
			if (project == projects[j]){
				fund = funds[j];
				break;
			}
			workers.push_back(new TeamLeader(id, name, worktime, rate, part, fund,people));
		}
		if (position == "Manager"){
			fin >> project;
			fin >> part;
			for (int j = 0; j < i; j++)
			if (project == projects[j]){
				fund = funds[j];
				break;
			}
			workers.push_back(new Manager(id, name, worktime, part, fund));
		}
		if (position == "ProjectManager"){
			fin >> project;
			fin >> part;
			fin >> people;
			for (int j = 0; j < i; j++)
			if (project == projects[j]){
				fund = funds[j];
				break;
			}
			workers.push_back(new ProjectManager(id, name, worktime, part, fund, people));
		}
		if (position == "SeniorManager"){
			fin >> project;
			fin >> part;
			fin >> people;
			for (int j = 0; j < i; j++)
			if (project == projects[j]){
				fund = funds[j];
				break;
			}
			workers.push_back(new SeniorManager(id, name, worktime, part, fund, people));
		}
	}

	for (int j = 0; j < num; j++){
		cout << workers[j]->getName() << "   " << workers[j]->getPayment() << endl;
	}
	
	return workers;
};

TEST (file, read){
	ofstream fin("test.txt");
        fin << "103 Dorsey Programmer 150 300 SERIOS 0.1\n";
        fin.close();
	ofstream finpr("project.txt");
        finpr << "SERIOS 30000\n";
        finpr.close();
        vector<Employee*> emp = main_action("test.txt");
        string res= "Dorsey";
        EXPECT_STREQ(emp[0]->getName().c_str(),res.c_str());
}

TEST (payment, personal){
	ofstream fin("test.txt");
        fin << "102 Shelton Driver 120 200 500\n";
        fin.close();
	ofstream finpr("project.txt");
        finpr << "SERIOS 30000\n";
        finpr.close();
        vector<Employee*> emp = main_action("test.txt");
        string res= "Dorsey";
        EXPECT_EQ(emp[0]->getPayment(),24500);
}

TEST (payment, engineer){
	ofstream fin("test.txt");
	fin << "103 Dorsey Programmer 150 300 SERIOS 0.1\n";
        fin.close();
	ofstream finpr("project.txt");
        finpr << "SERIOS 30000\n";
        finpr.close();
        vector<Employee*> emp = main_action("test.txt");
        EXPECT_EQ(emp[0]->getPayment(),48000);
}

TEST (payment, manager){
	ofstream fin("test.txt");
	fin << "108 Skinner ProjectManager 150 FIGURE 0.3 2\n";
        fin.close();
	ofstream finpr("project.txt");
        finpr << "FIGURE 20000\n";
        finpr.close();
        vector<Employee*> emp = main_action("test.txt");
        string res= "Dorsey";
        EXPECT_EQ(emp[0]->getPayment(),16400);
}
