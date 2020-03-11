#include "../include/Engineer.h"

Engineer::Engineer(int _id, std::string _name, int _worktime, double _payment)
                        : Employee(_id, move(_name), _worktime, _payment) {

}

double Engineer::payroll2(int projectBudget) {
    return projectBudget/this->worktime + payroll();
}

double Engineer::payroll() {
    return worktime*payment;
}

std::string Engineer::getPosition() {
    return position;
}