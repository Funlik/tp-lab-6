//
// Created by fiskirton on 19.02.2020.
//

#include "Classes/Common/SeniorManager.h"

SeniorManager * SeniorManager::p_instance = 0;
SeniorManagerDestroyer SeniorManager::destroyer;

SeniorManager::SeniorManager(int id, const string &name, const string &position) : ProjectManager(id, name, position) {}

const vector<Project *> & SeniorManager::getProjects() const{
    return projects;
}

double SeniorManager::calcSalaryHeaders() {
    return (double)this->getEmployees().size() * 10000 + (double)this->getProjects().size() * 50000;
}

void SeniorManager::add_project(Project * project) {
    this->projects.push_back(project);
}

SeniorManager * SeniorManager::getInstance(int id, const string &name, const string &position) {
    if (!p_instance){
        p_instance = new SeniorManager(id, name, position);
        destroyer.init(p_instance);
    }

    return p_instance;
}

SeniorManager::~SeniorManager() {
    this->projects.clear();
}

double SeniorManager::calcSalary() {
    return ProjectManager::calcSalary();
}

SeniorManagerDestroyer::~SeniorManagerDestroyer() {
    delete p_instance;
}

void SeniorManagerDestroyer::init(SeniorManager *p) {
    p_instance = p;
}


