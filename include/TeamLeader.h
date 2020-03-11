//
// Created by artem on 10.03.2020.
//

#pragma once


#include "Programmer.h"
#include "HeadingPayment.h"

class TeamLeader: public Programmer, public HeadingPayment {
private:
    int costOfCoder;
public:
    TeamLeader(int id, std::string name, int worktime, int payment, int partOfProject, int costOfCoder);

    int getCostOfCoder();

    void setCostOfCoder(int costOfCoder);

    int getSalary() override;

    int getSalaryByHeading() override;


};


