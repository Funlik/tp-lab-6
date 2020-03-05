//
// Created by araxal on 03.03.2020.
//

#include "../include/Engineer.h"

void Engineer::set_project(Specific_project *p) {
    assigned_project = p;
}

double Engineer::get_payment_according_p_impact() {
    return assigned_project->get_money(assigned_project->get_budget() * impact / 100);
}

double Engineer::get_payment_according_h_worked() {
    return base + hourly_rate * work_time;
}

void Engineer::get_salary() {
    set_work_time(0);
    payment = get_payment_according_h_worked() + get_payment_according_p_impact();
}

void Engineer::set_impact(unsigned int _impact) {
    impact = _impact;
}

const double &Engineer::get_impact() const {
    return impact;
}
