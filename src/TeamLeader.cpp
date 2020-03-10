#include "../headers/TeamLeader.h"

TeamLeader::TeamLeader(int _id, std::string _name, int _worktime, double _payment)
                            : Programmer(_id, _name, _worktime, _payment) {

}

double TeamLeader::payroll2(int projectBudget) {
    return projectBudget/getWorkTime();
}

double TeamLeader::payroll(int projectBudget, int people) {
    return getWorkTime()*payment + payroll2(projectBudget) + payroll3(people);
}

int TeamLeader::payroll3(int people) {
    return people*1000;
}

std::string TeamLeader::getPosition() {
    return position;
}

