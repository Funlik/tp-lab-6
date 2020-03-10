#ifndef UNTITLED1_COMPANY_H
#define UNTITLED1_COMPANY_H

#include "Cleaner.h"
#include "Driver.h"
#include "Engineer.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Company {
private:
    std::string name;
    string projectName = "Laba6";
    int projectBudget = 1000000;
    vector<Cleaner> cleaners;
    vector<Driver> drivers;
    vector<Engineer> engineers;
    vector<Programmer> programmers;
    vector<Tester> testers;
    vector<TeamLeader> teamLeaders;
    vector<Manager> managers;
    vector<ProjectManager> projectManagers;
    vector<SeniorManager> seniorManagers;

public:
    Company(string _name);
    string getName();
    void importData(string fileName);
    void addEmployee(vector<string> employee);
    void print();
};


#endif //UNTITLED1_COMPANY_H
