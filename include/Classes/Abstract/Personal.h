//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H

#include "Classes/Abstract/Employee.h"
#include "Interfaces/WorkTime.h"

class Personal: public Employee, public WorkTime {

protected:
    double base_salary_coef = 0.1;
    int base_rate = 0;

protected:
    Personal() = default;
    Personal(int id, const string &name, const string &position);

public:
    virtual double getBaseSalaryCoef() const;

    virtual int getBaseRate() const;

public:
    virtual void setBaseRate(int baseRate);

    virtual void setBaseSalaryCoef(double baseSalaryCoef);
};

#endif //TASK1_PERSONAL_H
