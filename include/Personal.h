//
// Created by artem on 10.03.2020.
//

#pragma once

#include "Employee.h"
#include "WorkTimePayment.h"

class Personal : public Employee, public WorkTimePayment {

protected:

    Personal(int id, std::string name, int worktime, int payment);

public:

    ~Personal();

    int getSalaryByWorkTime() override;

    int getSalary() override;
};

