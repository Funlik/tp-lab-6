//
// Created by araxal on 03.03.2020.
//

#include "../include/Manager.h"

double Manager::get_payment_according_p_impact() {
    return assigned_project->get_money(assigned_project->get_budget() * impact / 100);
}

void Manager::set_impact(unsigned int _impact) {
    impact = _impact;
}

void Manager::set_project(Specific_project *p) {
    assigned_project = p;
}

const double &Manager::get_impact() const {
    return impact;
}

void Manager::get_salary() {
    payment = get_payment_according_p_impact();
    set_work_time(0);
}
