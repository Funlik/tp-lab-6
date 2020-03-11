#include "../include/SeniorManager.h"

SeniorManager::SeniorManager(int _id, std::string _name, int _worktime)
                                : ProjectManager(_id, _name, _worktime) {

}

std::string SeniorManager::getPosition() {
    return position;
}

double SeniorManager::payroll(int projectBudget, int people) {
    return ProjectManager::payroll(projectBudget, people);
}

double SeniorManager::payroll2(int projectBudget) {
    return ProjectManager::payroll2(projectBudget);
}

int SeniorManager::payroll3(int people) {
    return ProjectManager::payroll3(people);
}
