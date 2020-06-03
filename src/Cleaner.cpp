#include "../include/Cleaner.h"

Cleaner::Cleaner(std::string name, int id, int payment, int workTime) : Personal(name, id, payment, workTime) {}

Cleaner::~Cleaner() {}

int Cleaner::getCleaningQuality() {
    return cleaningQuality;
}

void Cleaner::setCleaningQuality(int cleaningQuality) {
    this->cleaningQuality = cleaningQuality;
}

int Cleaner::calcSalary() {
    return calcWorkTimeSalary() + cleaningQuality * 3;
}

int Cleaner::calcWorkTimeSalary() {
    return payment * workTime;
}