//
// Created by artem on 10.03.2020.
//

#include "ProjectManager.h"

int ProjectManager::getCostOfCoder() {
    return costOfCoder;
}

void ProjectManager::setCostOfCoder(int costOfCoder) {
    ProjectManager::costOfCoder = costOfCoder;
}

ProjectManager::ProjectManager(int id, const std::string &name, int worktime, int payment, double partOfProject,
                               int costOfCoder) : Manager(id, name, worktime, payment, partOfProject){
    ProjectManager::costOfCoder = costOfCoder;
}

int ProjectManager::getSalary() {
    return Manager::getSalary() + getSalaryByHeading();
}

int ProjectManager::getSalaryByHeading() {
    return Manager::getProject()->getStuff().size() * costOfCoder;
}
