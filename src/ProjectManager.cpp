#include "../include/ProjectManager.h"

ProjectManager::ProjectManager(int _id, std::string _name, int _worktime)
                                : Manager(_id, _name, _worktime) {

}

std::string ProjectManager::getPosition() {
    return position;
}

double ProjectManager::payroll2(int projectBudget) {
    return Manager::payroll2(projectBudget);
}

int ProjectManager::payroll3(int people) {
    return people*10000;
}

double ProjectManager::payroll(int projectBudget, int people) {
    return payroll2(projectBudget)+payroll3(people);
}
