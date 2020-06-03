#include "../include/Engineer.h"


Engineer::Engineer(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance) : Employee(name, id, payment) {
    this->workTime = workTime;
    this->partOfProject = partOfProject;
    this->projectImportance = projectImportance;
}

Engineer::~Engineer() {}

int Engineer::getWorkTime() {
    return workTime;
}

void Engineer::serWorkTime(int workTime) {
    this->workTime = workTime;
}

int Engineer::getPartOfProject() {
    return partOfProject;
}

void Engineer::setPartOfProject(int partOfProject) {
    this->partOfProject = partOfProject;
}

void Engineer::setProjectImportance(int projectImportance) {
    this->projectImportance = projectImportance;
}

int Engineer::getProjectImportance() {
    return projectImportance;
}
