//
// Created by araxal on 04.03.2020.
//
#include "../include/SeniorManager.h"

void SeniorManager::add_project(Specific_project *p) {
    projects.push_back(p);
}

vector<Specific_project *> SeniorManager::get_projects_list() {
    return projects;
}
