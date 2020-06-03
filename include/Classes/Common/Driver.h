//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_DRIVER_H
#define TASK1_DRIVER_H

#include "Classes/Abstract/Personal.h"
#include "Interfaces/WorkTime.h"


class Driver: public Personal {
public:
    Driver(int id, const string &name, const string &position);

private:
    double extra_salary_coef{};

public:
    double calcSalaryWorktime() override;
    double calcSalary() override;

public:
    double getExtraSalaryCoef() const;

public:
    void setExtraSalaryCoef(double extraSalaryCoef);
};


#endif //TASK1_DRIVER_H
