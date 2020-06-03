//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Abstract/Engineer.h"

#include <utility>

Engineer::Engineer(int id, const string &name, const string &position) : Employee(id, name, position) {}

double Engineer::getContrib() const {
    return contrib;
}

Project Engineer::getProject() const {
    return *project;
}

void Engineer::setProject(Project * project) {
    Employee::setProject(project);
    Engineer::project = project;
}

void Engineer::setContrib(double contrib) {
    Engineer::contrib = contrib;
}

double Engineer::getBaseSalaryCoef() const {
    return base_salary_coef;
}

int Engineer::getBaseRate() const {
    return base_rate;
}

void Engineer::setBaseSalaryCoef(double baseSalaryCoef) {
    base_salary_coef = baseSalaryCoef;
}

void Engineer::setBaseRate(int baseRate) {
    base_rate = baseRate;
}

Engineer::~Engineer() {
//    delete this->project;
    this->project = nullptr;
}

const string &Engineer::getProjectName() {
    return this->project->getName();
}

double Engineer::calcSalaryProject() {
    double salary = this->getProject().getBudget() * this->getContrib();
    if (this->getProject().getBalance() < salary){
        cout << "lack of budget" << endl;
        salary = this->getProject().getBalance();
    }
    this->getProject().setBalance(salary);
    return salary;
}
