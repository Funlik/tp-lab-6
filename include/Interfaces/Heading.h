//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_HEADING_H
#define TASK1_HEADING_H

#include "Classes/Abstract/Employee.h"

class Heading {

public:
    virtual double calcSalaryHeaders() = 0;
    virtual void add_employee(Employee * employee) = 0;

};


#endif //TASK1_HEADING_H
