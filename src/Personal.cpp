#include "../include/Personal.h"

Personal::Personal(std::string name, int id, int payment, int workTime) : Employee(name, id, payment) {
    this->workTime = workTime;
}

Personal::~Personal() {}

int Personal::getWorkTime() {
    return workTime;
}

void Personal::setWorkTime(int workTime) {
    this->workTime = workTime;
}