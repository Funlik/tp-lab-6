//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/ProjectManager.h"

ProjectManager::ProjectManager(int id, const string &name, const string &position) : Manager(id, name, position){}

const vector<Employee *> & ProjectManager::getEmployees() const{
    return employees;
}

double ProjectManager::calcSalaryHeaders() {
    return (double)this->getEmployees().size() * 10000;
}

void ProjectManager::add_employee(Employee *employee) {
    this->employees.push_back(employee);
}

double ProjectManager::calcSalary() {
    return Manager::calcSalary() + this->calcSalaryHeaders();
}

ProjectManager::~ProjectManager() {
    employees.clear();
}
