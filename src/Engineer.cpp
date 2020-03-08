#include <Engineer.h>
//
// Created by Илья Соловьёв on 05.03.2020.
//

#include "Engineer.h"

////////////
//ENGINEER//
////////////

Engineer::Engineer() {};

Engineer::Engineer(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
                   double percentageOfWork) :
        Employee(id, name, workDays) {
    this->projectName = projectName;
    this->budget = budget;
    this->percentageOfWork = percentageOfWork;
    this->paymentPerDay = paymentPerDay;
}

double Engineer::projectPayment() {
    double pay = percentageOfWork * budget;
    return pay;
}

double Engineer::workDaysPayment() {
    double pay = paymentPerDay * workDays;
    return pay;
}

void Engineer::setPayment() {
    payment = projectPayment() + workDaysPayment();
}


//////////////
//PROGRAMMER//
//////////////

Programmer::Programmer(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
                       double percentageOfWork) :
        Engineer(id, name, workDays, paymentPerDay, projectName, budget, percentageOfWork) {

    setPayment();
}

void Programmer::setPayment() {
    payment = (projectPayment() + workDaysPayment()) * 1.2; //coefficient for programmer = 1.2
}

//////////
//TESTER//
//////////

Tester::Tester(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
               double percentageOfWork) :
        Engineer(id, name, workDays, paymentPerDay, projectName, budget, percentageOfWork) {

    setPayment();
}

void Tester::setPayment() {
    payment = (projectPayment() + workDaysPayment()) * 1.1; //coefficient for tester = 1.1
}


////////////////
//TEAM  LEADER//
////////////////

TeamLeader::TeamLeader(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
                       double percentageOfWork,
                       int people, int paymentPerPerson) :
        Programmer(id, name, workDays, paymentPerDay, projectName, budget, percentageOfWork) {

    this->people = people;
    this->paymentPerPerson = paymentPerPerson;
    setPayment();
}

double TeamLeader::workDaysPayment() {
    return paymentPerDay * workDays;
}

double TeamLeader::headingPayment() {
    return paymentPerPerson * people;
}

double TeamLeader::projectPayment() {
    return budget * percentageOfWork;
}

void TeamLeader::setPayment() {
    payment = workDaysPayment() + headingPayment() + projectPayment();
}