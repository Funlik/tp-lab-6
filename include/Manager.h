//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_MANAGER_H
#define LAB6_MANAGER_H

#include "Employee.h"
#include "Project.h"
#include <vector>

class Manager : public Employee, public Project {
    double impact;
protected:
    Specific_project *assigned_project;

    double get_payment_according_p_impact() final;

public:
    using Employee::Employee;

    void get_salary() override;

    const double &get_impact() const;

    void set_impact(unsigned int _impact);

    void set_project(Specific_project *p);
};

#endif //LAB6_MANAGER_H
