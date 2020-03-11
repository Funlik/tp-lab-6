//
// Created by artem on 10.03.2020.
//

#include "TeamLeader.h"

int TeamLeader::getCostOfCoder() {
    return costOfCoder;
}

void TeamLeader::setCostOfCoder(int costOfCoder) {
    TeamLeader::costOfCoder = costOfCoder;
}

TeamLeader::TeamLeader(int id, std::string name, int worktime, int payment, int partOfProject, int costOfCoder)
        : Programmer(id, name, worktime, payment, partOfProject) {
    TeamLeader::costOfCoder = costOfCoder;
}

int TeamLeader::getSalary() {
    return Engineer::getSalary()+ getSalaryByHeading();
}

int TeamLeader::getSalaryByHeading() {
    return costOfCoder * Engineer::project->getStuff().size();
}

