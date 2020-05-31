//
// Created by araxal on 03.03.2020.
//
#include "../include/Project.h"

Specific_project::Specific_project(const std::string &p_name, double _budget) {
    budget = _budget;
    project_name = p_name;
}

double Specific_project::get_budget() {
    return budget;
}

std::string Specific_project::get_pName() {
    return project_name;
}

double Specific_project::get_money(double required_money) {
    if (required_money <= budget) {
        budget -= required_money;
        return required_money;
    } else {
        return 0;
    }
}
