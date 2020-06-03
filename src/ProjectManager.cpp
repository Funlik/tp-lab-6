#include "../include/ProjectManager.h"

ProjectManager::~ProjectManager() {}

ProjectManager::ProjectManager(std::string name, int id, int payment, int partOfProject, int projectImportance,
                               int numberOfSubordinates) : Manager(name, id, payment, partOfProject, projectImportance) {
    this->numberOfSubordinates = numberOfSubordinates;
}

int ProjectManager::calcProjectSalary() {
    return partOfProject * projectImportance * 2;
}

int ProjectManager::calcHeadingSalary() {
    return numberOfSubordinates * 3;
}

int ProjectManager::calcSalary() {
    return calcHeadingSalary() + calcProjectSalary();
}
