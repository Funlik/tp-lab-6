//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_ENGINEER_H
#define LAB6_ENGINEER_H

#include "Employee.h"
#include "Project.h"
#include "WorkTime.h"

using namespace std;

class Engineer : public Employee, public Project, public WorkTime {
    double base, hourly_rate, impact = 0;
protected:
    Specific_project *assigned_project = nullptr;
public:
    Engineer(const string &spec, int id, const string &name, double _work_time, double _base, double h_rate) : Employee(
            spec, id, name, _work_time) {
        hourly_rate = h_rate;
        base = _base;
    }

    const double &get_impact() const;

    double get_payment_according_p_impact() final;

    double get_payment_according_h_worked() final;

    void set_impact(unsigned int _impact);

    void set_project(Specific_project *p);

    void get_salary() override;
};


#endif //LAB6_ENGINEER_H
