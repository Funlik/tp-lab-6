#include <Manager.h>
//
// Created by Илья Соловьёв on 05.03.2020.
//

///////////
//MANAGER//
///////////

Manager::Manager(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
                 double percentageOfWork) : Employee(id, name, workDays) {
    this->percentageOfWork = percentageOfWork;
    this->projectName = projectName;
    this->budget = budget;
    setPayment();
}

double Manager::projectPayment() {
    return percentageOfWork * budget;
}

double Manager::wordDaysPayment() {
    double pay = paymentPerDay * workDays;
    return pay;
}

void Manager::setPayment() {
    payment = projectPayment();
}

///////////////////
//PROJECT MANAGER//
///////////////////

ProjectManager::ProjectManager(int id, std::string name, int workDays, int paymentPerDay, std::string projectName,
                               int budget, double percentageOfWork, int people, double paymentPerPerson) : Manager(id,
                                                                                                                   name,
                                                                                                                   workDays,
                                                                                                                   paymentPerDay,
                                                                                                                   projectName,
                                                                                                                   budget,
                                                                                                                   percentageOfWork) {
    this->people = people;
    this->paymentPerPerson = paymentPerPerson;
    setPayment();
}

double ProjectManager::headingPayment() {
    return paymentPerPerson * people;
}

void ProjectManager::setPayment() {
    payment = projectPayment() + headingPayment();
}

//////////////////
//SENIOR MANAGER//
//////////////////

SeniorManager::SeniorManager(int id, std::string name, int workDays, int paymentPerDay,
                             int people, double paymentPerPerson) : ProjectManager(id, name, workDays, paymentPerDay,
                                                                                   "",
                                                                                   0,
                                                                                   0, people, paymentPerPerson) {

}

void SeniorManager::setPayment() {
    payment = (headingPayment()) * 1.5;
}
