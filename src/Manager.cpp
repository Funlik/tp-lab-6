#include "../include/Manager.h"

Manager::Manager(int _id, std::string _name, int _worktime)
                    : Employee(_id, _name, _worktime) {

}

double Manager::payroll2(int projectBudget) {
    return projectBudget/(getWorkTime()/10);
}

std::string Manager::getPosition() {
    return position;
}