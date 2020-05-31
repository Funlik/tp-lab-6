//
// Created by araxal on 03.03.2020.
//
#include "../include/Employee.h"

void Employee::set_work_time(double _work_time) {
    work_time = _work_time;
}

const string &Employee::get_speciality() const {
    return speciality;
}

const double &Employee::get_work_time() const {
    return work_time;
}

const double &Employee::get_current_payment() const {
    return payment;
}

int Employee::get_id() const {
    return id;
}
