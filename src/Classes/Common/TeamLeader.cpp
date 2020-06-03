//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/TeamLeader.h"

TeamLeader::TeamLeader(int id, const string &name, const string &position) : Programmer(id, name, position) {}

const vector<Employee *> & TeamLeader::getEmployees() const {
    return employees;
}

double TeamLeader::calcSalaryHeaders() {
    return (double)this->getEmployees().size() * 5000;
}

void TeamLeader::add_employee(Employee * employee) {
    this->employees.push_back(employee);
}

TeamLeader::~TeamLeader() {
    employees.clear();
}

double TeamLeader::calcSalary() {
    return Programmer::calcSalary() + this->calcSalaryHeaders();
}
