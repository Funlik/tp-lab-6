//
// Created by artem on 10.03.2020.
//

#include "Manager.h"

Manager::Manager(int id, std::string name, int worktime, int payment, double partOfProject) : Employee(id, name, worktime, payment) {
    Manager::partOfProject = partOfProject;
    Manager::project = nullptr;
}

Manager::~Manager() {

}

void Manager::setPartOfProject(double partOfProject) {
    Manager::partOfProject = partOfProject;
}

double Manager::getPartOfProject() {
    return partOfProject;
}

int Manager::getSalary() {
    return (int) getSalaryByProject();
}

double Manager::getSalaryByProject() {
    return project->getBudget() * partOfProject;
}

void Manager::setProject(Project *project) {
    Manager::project = project;
}

Project* Manager::getProject() {
    return Manager::project;
}
