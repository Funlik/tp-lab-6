//
// Created by fiskirton on 04.03.2020.
//

#include "Factory/Factory.h"
#include "Classes/Common/Project.h"
#include "Extra/Helper.h"
#include <map>
#include <fstream>
#include <Classes/Common/Cleaner.h>

#include "Factory/CleanerFactory.h"
#include "Factory/DriverFactory.h"
#include "Factory/ProgrammerFactory.h"
#include "Factory/TesterFactory.h"
#include "Factory/TeamLeaderFactory.h"
#include "Factory/ManagerFactory.h"
#include "Factory/ProjectManagerFactory.h"
#include "Factory/SeniorManagerFactory.h"

enum Positions{
    CLEANER=0,
    DRIVER=1,
    PROGRAMMER=2,
    TESTER=3,
    TEAMLEADER=4,
    MANAGER=5,
    PROJECT_MANAGER=6,
    SENIOR_MANAGER=7
};

int main(){

    auto projects = getProjects("../Data/projects.csv");
    auto * cleanerFactory = new CleanerFactory();
    auto * driverFactory = new DriverFactory();
    auto * programmerFactory = new ProgrammerFactory();
    auto * testerFactory = new TesterFactory();
    auto * teamLeaderFactory = new TeamLeaderFactory();
    auto * managerFactory = new ManagerFactory();
    auto * projectManagerFactory = new ProjectManagerFactory();
    auto * seniorManagerFactory = new SeniorManagerFactory();

    map <string, int> mapping = {
            {"Cleaner", CLEANER},
            {"Driver", DRIVER},
            {"Programmer", PROGRAMMER},
            {"Tester", TESTER},
            {"TeamLeader", TEAMLEADER},
            {"Manager", MANAGER},
            {"ProjectManager", PROJECT_MANAGER},
            {"SeniorManager", SENIOR_MANAGER}
    };

    ifstream reader("../Data/stuff.csv");

    string line;
    vector<string> data;

    auto  cleaners = new vector<Cleaner *>;
    auto  drivers = new vector<Driver *>;
    auto  programmers = new vector<Programmer *>;
    auto  testers = new vector<Tester *>;
    auto  teamleaders = new vector<TeamLeader *>;
    auto  managers = new vector<Manager *>;
    auto  project_managers = new vector<ProjectManager *>;
    SeniorManager *senior_manager = nullptr;

    auto employees = new vector<Employee *>;

    Project * project = nullptr;

    if (reader.is_open()) {
        while (getline(reader, line)) {
            data = split(line, ',');
            int statment = mapping.find(data[2])->second;
            int id = stoi(data[0]);
            string name = data[1];
            string position = data[2];
            int base = 0;
            if (data[3] != " "){
                base = stoi(data[3]);
            }
            if (data[4] != "null"){
                project = projects.find(data[4])->second;
            }
            switch (statment){
                case CLEANER:{
                    auto * cleaner = cleanerFactory->create_employee(
                          id, name, position, base, project);
                    cleaners->push_back(cleaner);
                    employees->push_back(cleaner);
                    break;
                }
                case DRIVER:{
                    auto * driver = driverFactory->create_employee(
                            id, name, position, base, project);
                    drivers->push_back(driver);
                    employees->push_back(driver);
                    break;
                }
                case PROGRAMMER:{
                    auto * programmer = programmerFactory->create_employee(
                            id, name, position, base, project);
                    programmers->push_back(programmer);
                    employees->push_back(programmer);
                    break;
                }
                case TESTER:{
                    auto * tester = testerFactory->create_employee(
                            id, name, position, base, project);
                    testers->push_back(tester);
                    employees->push_back(tester);
                    break;
                }
                case TEAMLEADER:{
                    auto * teamleader = teamLeaderFactory->create_employee(
                            id, name, position, base, project);
                    teamleaders->push_back(teamleader);
                    employees->push_back(teamleader);
                    break;
                }
                case MANAGER:{
                    auto * manager = managerFactory->create_employee(
                            id, name, position, base, project);
                    managers->push_back(manager);
                    employees->push_back(manager);
                    break;
                }
                case PROJECT_MANAGER:{
                    auto * project_manager = projectManagerFactory->create_employee(
                            id, name, position, base, project);
                    project_managers->push_back(project_manager);
                    employees->push_back(project_manager);
                    break;
                }
                case SENIOR_MANAGER:{
                    senior_manager = seniorManagerFactory->create_employee(
                            id, name, position, base, project);
                    senior_manager->add_project(projects.find("project1")->second);
                    senior_manager->add_project(projects.find("project2")->second);
                    employees->push_back(senior_manager);
                    break;
                }
                default:
                    break;
            }
        }
    }

    for (auto teamlead: *teamleaders){
        for (auto programmer: *programmers){
            if (programmer->getProject().getName() == teamlead->getProject().getName()){
                teamlead->add_employee(programmer);
            }
        }
        for (auto tester: *testers){
            if (tester->getProject().getName() == teamlead->getProject().getName()){
                teamlead->add_employee(tester);
            }
        }
        teamlead->setPayment(teamlead->calcSalary());
    }

    for (auto pm: *project_managers){
        for (auto teamlead: *teamleaders){
            if (pm->getProject().getName() == teamlead->getProject().getName()){
                for (auto eng: teamlead->getEmployees()){
                    pm->add_employee(eng);
                }
            }
        }
        for (auto manager: *managers){
            if (manager->getProject().getName() == manager->getProject().getName()){
                pm->add_employee(manager);
            }
        }
        pm->setPayment(pm->calcSalary());

    }

    for (auto pProject: senior_manager->getProjects()){
        for (auto pm: *project_managers){
            if (pProject->getName() == pm->getProject().getName()){
                for (auto eng: pm->getEmployees()){
                    senior_manager->add_employee(eng);
                }
            }
        }
    }

    for (auto emp: *employees){
        emp->setPayment(emp->calcSalary());
        if (!emp->getProjectName().empty()){
            projects.find(emp->getProjectName())->second->setBalance(emp->getPayment());
        }
        cout << emp->getName() << " " << emp->getPosition() << " " << emp->getPayment() << endl;
    }

    cout << projects.find("project1")->second->getBalance() << endl;
    cout << projects.find("project2")->second->getBalance() << endl;

    return 0;
}