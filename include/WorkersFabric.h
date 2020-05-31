//
// Created by Илья Соловьёв on 04.03.2020.
//

#ifndef TASK1_WORKERSFABRIC_H
#define TASK1_WORKERSFABRIC_H

#include "General.h"
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"
#include <vector>

using namespace std;


Employee *createWorker(vector<string> &info) {
    int id, workDays, budget, paymentPerDay, people, paymentPerPerson;
    double percentageOfWork;
    string name, surname, patronymic, position, projectName;
    id = stoi(info[0]);
    surname = info[1];
    name = info[2];
    patronymic = info[3];
    position = info[4];
    workDays = stoi(info[5]);
    paymentPerDay = stoi(info[6]);
    string FIO = surname + " " + name + " " + patronymic;
    if (position == "cleaner") {
        Cleaner *cleaner = new Cleaner(id, FIO, workDays, paymentPerDay);
        return cleaner;
    } else if (position == "driver") {
        Driver *driver = new Driver(id, FIO, workDays, paymentPerDay);
        return driver;
    } else if (position == "seniorManager") {
        people = stoi(info[7]);
        paymentPerPerson = stoi(info[8]);
        SeniorManager *seniorManager = new SeniorManager(id, FIO, workDays, paymentPerDay, people,
                                                         paymentPerPerson);
        return seniorManager;
    } else if (position == "projManager") {
        projectName = info[7];
        budget = stoi(info[8]);
        percentageOfWork = stod(info[9]);
        people = stoi(info[10]);
        paymentPerPerson = stoi(info[11]);
        ProjectManager *projectManager = new ProjectManager(id, FIO, workDays, paymentPerDay, projectName,
                                                            budget,
                                                            percentageOfWork, people, paymentPerPerson);
        return projectManager;
    } else if (position == "manager") {
        projectName = info[7];
        budget = stoi(info[8]);
        percentageOfWork = stod(info[9]);
        Manager *manager = new Manager(id, FIO, workDays, paymentPerDay, projectName, budget,
                                       percentageOfWork);
        return manager;
    } else if (position == "teamLeader") {
        projectName = info[7];
        budget = stoi(info[8]);
        percentageOfWork = stod(info[9]);
        people = stoi(info[10]);
        paymentPerPerson = stoi(info[11]);
        TeamLeader *teamLeader = new TeamLeader(id, FIO, workDays, paymentPerDay, projectName, budget,
                                                percentageOfWork, people, paymentPerPerson);
        return teamLeader;
    } else if (position == "programmer") {
        projectName = info[7];
        budget = stoi(info[8]);
        percentageOfWork = stod(info[9]);
        Programmer *programmer = new Programmer(id, FIO, workDays, paymentPerDay, projectName, budget,
                                                percentageOfWork);
        return programmer;
    } else if (position == "tester") {
        projectName = info[7];
        budget = stoi(info[8]);
        percentageOfWork = stod(info[9]);
        Manager *tester = new Manager(id, FIO, workDays, paymentPerDay, projectName, budget,
                                      percentageOfWork);
        return tester;
    }
    return nullptr;
}


#endif //TASK1_WORKERSFABRIC_H
