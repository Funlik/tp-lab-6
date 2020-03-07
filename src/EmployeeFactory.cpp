//
// Created by Илья on 002 02.03.20.
//
#include <fstream>
#include <map>
#include <iostream>

#include "IT_project.h"
#include "EmployeeFactory.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

using std::map;

EmployeeFactory::EmployeeFactory(string filename, string projects_filename) {
    this->filename = filename;
    this->projects_filename = projects_filename;
}

vector<Employee*>* EmployeeFactory::getEmployees() {
    map<string, IT_project*> budgets;
    std::ifstream fin;
    fin.open(projects_filename, std::ifstream::in);
    string project_name, budget;
    while(getline(fin, project_name, ',')){
        getline(fin, budget);
        budgets.insert(std::make_pair(project_name, new IT_project(project_name, atoi(budget.c_str()))));
    }
    fin.close();

    auto employees = new vector<Employee*>();
    fin.open(filename, std::ifstream::in);
    string id, fio, spec, base, share, project, subord, rub_rep_subord;
    while(getline(fin, id, ',')){
        getline(fin, fio, ',');
        getline(fin, spec, ',');
        getline(fin, base, ',');
        getline(fin, share, ',');
        getline(fin, project, ',');
        getline(fin, subord, ',');
        getline(fin, rub_rep_subord);
        if (spec == "Cleaner"){
            employees->push_back(new Cleaner(atoi(id.c_str()), fio, 40, atof(base.c_str()), spec));
        }
        else if (spec == "Driver"){
            employees->push_back(new Driver(atoi(id.c_str()), fio, 40, atof(base.c_str()), spec));
        }
        else if (spec == "Programmer"){
            employees->push_back(new Programmer(atoi(id.c_str()), fio, 40, atof(share.c_str()),
                    atoi(base.c_str()), budgets[project], spec));
        }
        else if (spec == "Tester"){
            employees->push_back(new Tester(atoi(id.c_str()), fio, 40, atof(share.c_str()),
                    atoi(base.c_str()), budgets[project], spec));
        }
        else if (spec == "TeamLeader"){
            employees->push_back(new TeamLeader(atoi(id.c_str()), fio, 40, atof(share.c_str()),
                    atoi(base.c_str()), budgets[project], atoi(subord.c_str()), atoi(rub_rep_subord.c_str()), spec));
        }
        else if (spec == "Manager"){
            employees->push_back(new Manager(atoi(id.c_str()), fio, 40, atof(share.c_str()), budgets[project], spec));
        }
        else if (spec == "ProjectManager"){
            employees->push_back(new ProjectManager(atoi(id.c_str()), fio, 40, atof(share.c_str()),
                    budgets[project], atoi(subord.c_str()), atoi(rub_rep_subord.c_str()), spec));
        }
        else if (spec == "SeniorManager"){
            employees->push_back(new SeniorManager(atoi(id.c_str()), fio, 40, atof(share.c_str()),
                                                    budgets[project], atoi(subord.c_str()), atoi(rub_rep_subord.c_str()), spec));
        }

    }
    fin.close();
    return employees;
}
