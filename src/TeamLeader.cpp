
#include "../include/TeamLeader.h"

TeamLeader::TeamLeader(std::string name, int id, int workTime, int payment,
                       int partOfProject, int projectImportance, int numberOfSubordinates)
                       : Programmer(name, id, workTime, payment, partOfProject, projectImportance) {

    this->numberOfSubordinates = numberOfSubordinates;
}

int TeamLeader::getNumberOfSubordinates() {
    return numberOfSubordinates;
}

void TeamLeader::setNumberOfSubordinates(int numberOfSubordinates) {
    this->numberOfSubordinates = numberOfSubordinates;
}

int TeamLeader::calcSalary() {
    return calcWorkTimeSalary() + calcProjectSalary() + calcHeadingSalary();
}

int TeamLeader::calcWorkTimeSalary() {
    return Programmer::calcWorkTimeSalary() * 2;
}

int TeamLeader::calcProjectSalary() {
    return Programmer::calcProjectSalary() * 3;
}

int TeamLeader::calcHeadingSalary() {
    return numberOfSubordinates * 3;
}
