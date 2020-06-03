//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/Manager.h"

#include <utility>

Manager::Manager(int id, const string &name, const string &position) : Employee(id, name, position) {}

double Manager::calcSalaryProject() {
    double salary = this->getProject().getBudget() * this->getContrib();
    if (this->getProject().getBalance() < salary){
        cout << "lack of budget" << endl;
        salary = this->getProject().getBalance();
    }
    this->getProject().setBalance(salary);
    return salary;
}

Project & Manager::getProject() const {
    return *project;
}

double Manager::getContrib() const {
    return contrib;
}

void Manager::setContrib(double contrib) {
    Manager::contrib = contrib;
}

void Manager::setProject(Project *project) {
    Employee::setProject(project);
    Manager::project = project;
}

Manager::~Manager() {
    this->project = nullptr;
}

double Manager::calcSalary() {
    return this->calcSalaryProject();
}

const string &Manager::getProjectName() {
    return this->project->getName();
}
