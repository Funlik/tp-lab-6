#include "../include/Programmer.h"

Programmer::Programmer(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance)
: Engineer(name, id, workTime, payment, partOfProject, projectImportance) {}

Programmer::~Programmer() {}

int Programmer::calcWorkTimeSalary() {
    return workTime * payment;
}

int Programmer::calcProjectSalary() {
    return partOfProject * projectImportance;
}

int Programmer::calcSalary() {
    return calcWorkTimeSalary() + calcProjectSalary();
}