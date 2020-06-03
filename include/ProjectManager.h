//
// Created by artem on 10.03.2020.
//

#pragma once

#include "Manager.h"
#include "HeadingPayment.h"

class ProjectManager: public Manager, public HeadingPayment {
private:
    int costOfCoder;
public:

    ProjectManager(int id, const std::string &name, int worktime, int payment, double partOfProject, int costOfCoder);

    int getCostOfCoder();

    void setCostOfCoder(int costOfCoder);

    int getSalary() override;

    int getSalaryByHeading() override;
};

