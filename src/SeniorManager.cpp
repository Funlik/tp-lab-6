#include "../include/SeniorManager.h"

SeniorManager::SeniorManager(std::string name, int id, int payment, int partOfProject, int projectImportance,
                             int numberOfSubordinates) : ProjectManager(name, id, payment, partOfProject,
                                                                        projectImportance, numberOfSubordinates) {}

SeniorManager::~SeniorManager() {}

int SeniorManager::calcSalary() {
    return calcProjectSalary() + calcHeadingSalary();
}

int SeniorManager::calcProjectSalary() {
    return ProjectManager::calcProjectSalary() * 2;
}

int SeniorManager::calcHeadingSalary() {
    return ProjectManager::calcHeadingSalary() * 3;
}
