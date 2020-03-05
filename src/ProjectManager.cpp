//
// Created by araxal on 03.03.2020.
//
#include "../include/ProjectManager.h"

void ProjectManager::add_manager(Manager *m) {
    assigned_managers.push_back(m);
}

void ProjectManager::change_project(Specific_project *p) {
    *assigned_project = *p;
}

void ProjectManager::get_salary() {
    set_work_time(0);
    payment = get_payment_according_p_impact() + get_payment_according_belongs_staff();
}