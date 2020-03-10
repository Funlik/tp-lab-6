//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Abstract/Employee.h"
#include <utility>

Employee::Employee(int id, string name, string position) : id(id), name(std::move(name)), position(std::move(position)){}

int Employee::getId() const {
    return id;
}

const string &Employee::getName() const {
    return name;
}

double Employee::getWorktime() const {
    return worktime;
}

double Employee::getPayment() const {
    return payment;
}

void Employee::setPayment(double p) {
    Employee::payment = p;
}

void Employee::setWorktime(int worktime) {
    this->worktime = worktime;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setProject(Project * project) {
    Employee::project = project->getName();
}

const string &Employee::getProjectName() {
    return project;
}
