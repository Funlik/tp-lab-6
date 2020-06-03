#include "../include/Manager.h"

int Manager::getPartOfProject(){
    return partOfProject;
}

void Manager::setPartOfProject(int partOfProject) {
    this->partOfProject = partOfProject;
}

int Manager::getProjectImportance(){
    return projectImportance;
}

void Manager::setProjectImportance(int projectImportance) {
    this->projectImportance = projectImportance;
}

Manager::~Manager() {}

Manager::Manager(std::string name, int id, int payment, int partOfProject, int projectImportance)
                : Employee(name, id, payment) {
    this->partOfProject = partOfProject;
    this->projectImportance = projectImportance;
}
