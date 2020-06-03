//
// Created by Оксана on 04.03.2020.
//
#include "abstracts.h"
#include "interfaces.h"
#include "basic.h"
#include "factory.h"
#include <cstdlib>
#include <map>
#include <assert.h>

using namespace std;

map <string, int> projects;
enum PROFFESIONS {TRAINEE, MANAGER, CLEANER, DRIVER, PROGRAMMER, TEAM_LEADER, TESTER, PROJECT_MANAGER, SENIOR_MANAGER};

Employee* Factory::createEmployee(vector<string> worker )
{
    Employee * p;

    int id, subordinates, headpay, rate, surcharges;
    string fio, project;
    float contribution;
    id = atoi(worker[0].c_str());
    fio = (worker[1] + " " + worker[2] + " " + worker[3]);
    string position = worker[4];
    PROFFESIONS posId = TRAINEE;

    if (position == "Cleaner")				    posId = CLEANER;
    else if (position == "Driver")				posId = DRIVER;
    else if (position == "ProjectManager")		posId = PROJECT_MANAGER;
    else if (position == "Tester")				posId = TESTER;
    else if (position == "Manager")				posId = MANAGER;
    else if (position == "TeamLeader")			posId = TEAM_LEADER;
    else if (position == "SeniorManager")		posId = SENIOR_MANAGER;
    else if (position == "Programmer")			posId = PROGRAMMER;

    switch (posId)
    {
        case CLEANER: // 6 param
            rate = stoi(worker[5]);
            p = new Cleaner(id, fio, rate);
            break;

        case DRIVER: // 7 param
            rate = stoi(worker[5]);
            surcharges = stoi(worker[6]);
            p = new Driver(id, fio, rate, surcharges);
            break;

        case  TESTER: // 8 param
            rate = stoi(worker[5]);
            contribution = stof(worker[6]);
            project = worker[7];
            p = new Tester(id, fio, rate, contribution, project);
            break;

        case  PROGRAMMER: // 8 param
            rate = stoi(worker[5]);
            contribution = stof(worker[6]);
            project = worker[7];
            p = new Programmer(id, fio, rate, contribution, project);;
            break;

        case  TEAM_LEADER: // 10 param
            rate = stoi(worker[5]);
            contribution = stof(worker[6]);
            project = worker[7];
            subordinates = stoi(worker[8]);
            headpay = stoi(worker[9]);
            p = new TeamLeader(id, fio, rate, contribution, project, subordinates, headpay);
            break;

        case  MANAGER: // 7 param
            contribution = stof(worker[5]);
            project = worker[6];
            p = new Manager(id, fio, contribution, project);
            break;
        case  PROJECT_MANAGER: // 9 param
            contribution = stof(worker[5]);
            project = worker[6];
            subordinates = stoi(worker[7]);
            headpay = stoi(worker[8]);
            p = new ProjectManager(id, fio, contribution, project, subordinates, headpay);
            break;
        case  SENIOR_MANAGER: // 8 param
            contribution = stof(worker[5]);
            subordinates = stoi(worker[6]);
            headpay = stoi(worker[7]);
            p = new SeniorManager(id, fio, contribution, subordinates, headpay);
            break;


    }
    return p;
};
