//
// Created by araxal on 03.03.2020.
//
#ifndef LAB6_PROJECT_H
#define LAB6_PROJECT_H

#include <string>

using namespace std;

struct Project {
    virtual double get_payment_according_p_impact() = 0;
};

class Specific_project {
    string project_name;
    double budget;
public:
    Specific_project(const string &p_name, double _budget);

    string get_pName();

    double get_budget();

    double get_money(double required_money);
};

#endif //LAB6_PROJECT_H
