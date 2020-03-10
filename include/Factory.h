//
// Created by aklen on 10.03.2020.
//
#ifndef FACTORY_H
#define FACTORY_H
#include <vector>
#include "Manager.h"
#include "Personal.h"
#include "Engineer.h"
using namespace std;


Employee *createWorker(vector<string> &data){
    string fio, position, projectName;
    int id, workTime,dayPayment, budget, AmountOfPeople;
    double PaymentPerOne, partOfWork;

    id = stoi(data[0]);
    fio = data[1] + " " + data[2] + " " + data[3];
    position = data[4];
    workTime = stoi(data[5]);
    dayPayment = stoi(data[6]);
    if(position == "Cleaner"){
        Cleaner *cleaner = new Cleaner(id, fio, workTime, dayPayment);
        return cleaner;
    }
    else if(position == "Driver"){
        Driver *driver = new Driver(id, fio, workTime, dayPayment);
        return driver;
    }
    else if(position == "Manager"){
        projectName = data[7];
        budget = stoi(data[8]);
        partOfWork = stod(data[9]);
        Manager *manager =new Manager(id, fio, workTime, dayPayment, projectName, budget, partOfWork);
        return manager;
    }
    else if(position == "ProjectManager"){
        projectName = data[7];
        budget = stoi(data[8]);
        partOfWork = stod(data[9]);
        AmountOfPeople = stoi(data[10]);
        PaymentPerOne = stod(data[11]);
        ProjectManager *projectManager =new ProjectManager(id,fio,workTime,dayPayment,projectName,budget,
                partOfWork, AmountOfPeople,PaymentPerOne);
        return projectManager;
    }
    else if(position == "SeniorManager"){
        AmountOfPeople = stoi(data[7]);
        PaymentPerOne = stod(data[8]);
        SeniorManager *seniorManager =new SeniorManager(id,fio,workTime,dayPayment,AmountOfPeople,PaymentPerOne);
        return seniorManager;
    }
    else if(position == "Programmer"){
        projectName = data[7];
        budget = stoi(data[8]);
        partOfWork = stod(data[9]);
        Programmer *programmer =new Programmer(id,fio,workTime,dayPayment,projectName,budget,partOfWork);
        return programmer;
    }
    else if(position == "Tester"){
        projectName = data[7];
        budget = stoi(data[8]);
        partOfWork = stod(data[9]);
        Tester *tester =new Tester(id,fio,workTime,dayPayment,projectName,budget,partOfWork);
        return tester;
    }
    else if(position == "TeamLeader"){
        projectName = data[7];
        budget = stoi(data[8]);
        partOfWork = stod(data[9]);
        AmountOfPeople = stoi(data[10]);
        PaymentPerOne = stod(data[11]);
        TeamLeader *teamLeader =new TeamLeader(id, fio, workTime, dayPayment, projectName, budget, partOfWork,
                AmountOfPeople, PaymentPerOne);
        return teamLeader;
    }
    return nullptr;
}
#endif