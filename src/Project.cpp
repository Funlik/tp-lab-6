//
// Created by artem on 10.03.2020.
//

#include "Project.h"

Project::Project(std::string title, double budget) {
    Project::title = title;
    Project::budget = budget;
}

Project::~Project() {

}

std::string Project::getTitle() {
    return title;
}

std::vector<Engineer *> Project::getStuff() {
    return stuff;
}

void Project::addEmployee(Engineer *engineer) {
    stuff.push_back(engineer);
}

void Project::setBudget(double budget) {
    Project::budget = budget;
}

double Project::getBudget() {
    return budget;
}

int Project::getStuffSize() {
    return stuff.size();
}
