//
// Created by Mikhail on 04.03.2020.
//

#include <MainClasses.h>

#include <map>
#include <utility>

extern std::map<string, int> projects;

Cleaner::Cleaner(int id, string FIO, int rate) :
    Personal(id, std::move(FIO), rate){};

Driver::Driver(int id, string FIO, int rate, int _extraCharge)
    :Personal(id, std::move(FIO), rate), extraCharge(_extraCharge){};

void Driver::calcPayment() {
    payment = calcWT() + extraCharge;
}

Tester::Tester(int id, string FIO, int rate, double contribution, string projectName)
    :Engineer(id, std::move(FIO), rate, contribution, std::move(projectName)){};

Programmer::Programmer(int id, string FIO, int rate, double contribution, string projectName)
    :Engineer(id, std::move(FIO), rate, contribution, std::move(projectName)){};

TeamLeader::TeamLeader(int id, string FIO, int rate, double contribution,
    string projectName, int _subs, int _headpay)
    :Programmer(id, std::move(FIO), rate, contribution, std::move(projectName)),
    headpay(_headpay), subs(_subs){};

int TeamLeader::calcHeading() {
    return subs * headpay;
}

void TeamLeader::calcPayment() {
    payment = calcWT() * calcProject() + calcHeading();
}

Manager::Manager(int id, string FIO, double _contribution, string _projectName)
    :Employee(id, std::move(FIO)), contribution(_contribution), projectName(std::move(_projectName)){};

double Manager::calcProject() {
    return projects[projectName] * contribution;
}

void Manager::calcPayment() {
    payment = calcProject();
}

ProjectManager::ProjectManager(int id, string FIO, double contribution,
    string projectName, int _subs, int _headpay)
    :Manager(id, std::move(FIO), contribution, std::move(projectName)),
     headpay(_headpay), subs(_subs){};

int ProjectManager::calcHeading() {
    return subs * headpay;
}

void ProjectManager::calcPayment() {
    payment = calcProject() + calcHeading();
}

SeniorManager::SeniorManager(int id, string FIO, double contribution, int subs, int headpay)
    :ProjectManager(id, std::move(FIO), contribution, "",  subs , headpay){};

double SeniorManager::calcProject() {
    double fullPayment = 0;
    for(const auto& x: projects)
        fullPayment += x.second;
    return fullPayment * contribution;
}