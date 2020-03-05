//
// Created by araxal on 03.03.2020.
//

#include "../include/TeamLeader.h"

void TeamLeader::add_assigned_programmer(Programmer *p) {
    p->set_project(assigned_project);
    assigned_programmers.push_back(p);
}

double TeamLeader::get_payment_according_belongs_staff() {
    return (double) (assigned_programmers.size());
}
