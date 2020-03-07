//
// Created by Mikhail on 04.03.2020.
//

#include <AbstractClasses.h>

#include <utility>
#include <map>
extern std::map<string, int> projects;
Employee::Employee(int _id, string _FIO) :
        id(_id), FIO(std::move(_FIO)) {}

int Employee::getId() const {
    return id;
}


double Employee::getPayment() const {
    return payment;
}

string Employee::getFIO() const {
    return FIO;
}

void Employee::setTime(int _workTime) {
    workTime = _workTime;
}

Engineer::Engineer(int _id, string _FIO, int _rate,
        double _contribution, string _projectName)
    :Employee(_id, std::move(_FIO)),
    rate(_rate), contribution(_contribution), projectName(std::move(_projectName)) {}

int Engineer::calcWT() {
    return workTime * rate;
}

double Engineer::calcProject() {
    return projects[projectName] * contribution;
}

void Engineer::calcPayment() {
    payment = calcWT() + calcProject();
}

Personal::Personal(int _id, string _FIO, int _rate)
    :Employee(_id, std::move(_FIO)), rate(_rate) {}

int Personal::calcWT() {
    return rate * workTime;
}

void Personal::calcPayment() {
    payment = calcWT();
}
