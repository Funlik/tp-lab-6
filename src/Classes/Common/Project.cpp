//
// Created by fiskirton on 04.03.2020.
//

#include "Classes/Common/Project.h"

#include <utility>
#include <iostream>


Project::Project(string name, int budget) : budget(budget), name(std::move(name)), balance(budget) {}

double Project::getBudget() const {
    return budget;
}

const string &Project::getName() const {
    return name;
}

void Project::setBalance(double sum) {
    Project::balance -= sum;
    if (balance < 0){
        cout << name << ": empty balance" << endl;

        balance = 0;
    }
}

void Project::subtract(double sum) {
    this->setBalance(this->getBudget() - sum);
}

double Project::getBalance() const {
    return balance;
}
